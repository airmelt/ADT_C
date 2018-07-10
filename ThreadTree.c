// 线索二叉树的存储结构描述
typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild, *rchild;
	int ltag, rtag;
}ThreadNode *ThreadTree;
// 通过中序遍历对二叉树线索化
void InThread(ThreadTree &p, ThreadTree &pre) {
	if (p != NULL) {
		// 递归,线索化左子树
		InThread(p->lchild, pre);
		// 左子树为空,建立前驱线索
		if (p->lchild == NULL) {
			p->lchild = pre;
			p->ltag = 1;
		}
		// 建立前驱结点的后继线索
		if (pre != NULL && pre->rchild == NULL) {
			pre->rchild = p;
			pre->rtag = 1;
		}
		// 标记当前结点称为刚刚访问过的结点
		pre = p;
		// 递归,线索化右子树
		InThread(p->rchild, pre);
	}
}
// 通过中序遍历建立中序线索二叉树
void CreateInThread(ThreadTree T) {
	ThreadTree pre = NULL;
	// 非空二叉树,线索化
	if (T != NULL) {
		InThread(T, pre);
		// 处理遍历的最后一个结点
		pre->rchild = NULL;
		pre->rtag = 1;
	}
}
// 求中序线索二叉树中中序序列下的第一个结点
ThreadNode *Firstnode(ThreadNode *p) {
	while (p->ltag == 0) p = p->lchild;
	return p;
}
// 求中序线索二叉树中结点p在中序序列下的后继结点
ThreadNode *Nextnode(ThreadNode *p) {
	if (p->rtag == 0) return Firstnode(p->rchild);
	// rtag == 1直接返回后继线索
	else return p->rchild;
}
// 求中序线索二叉树中中序序列下的最后一个结点
ThreadNode *Lastnode(ThreadNode *p) {
	while (p->rchild) p = p->rchild;
	return p;
}
// 求中序线索二叉树中结点p在中序序列下的前驱结点
ThreadNode *Prenode(ThreadNode *p) {
	if (p->ltag == 0) return Firstnode(p->rchild);
	// ltag == 1直接返回前驱线索
	else return p->lchild;
}
// 不含头结点的中序线索二叉树的中序遍历算法
void Inorder(ThreadNode *T) {
	for (ThreadNode *p = Firstnode(T); p != NULL; p = Nextnode(p))
		visit(p);
}