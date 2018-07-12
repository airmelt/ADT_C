// BST的非递归查找算法
BSTNode *BST_Search(BiTree T, ElemType key, BSTNode *&p) {
	// 查找函数返回指向关键字值为key的结点指针,若不存在,返回NULL
	p = NULL; // p指向被查找结点的双亲,用于插入和删除操作中
	while (T != NULL && key != T->data) {
		p = T;
		if (key < T->data) T = T->lchild;
		else T = T->rchild;
	}
	return T;
}
// BST的插入
int BST_Insert(BiTree &T, KeyType k) {
	// 在BST中插入一个关键字为k的结点
	if (T == NULL) {
		T = (BiTree)malloc(sizeof(BSTNode));
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;
	} else if (k == T->key) return 0;
	else if (k < T->key) return BST_Insert(T->lchild, k);
	else return BST_Insert(T->rchild, k);
}
// BST的构造
void Creat_BST(BiTree &T, KeyType str[], int n) {
	T = NULL;
	int i = 0;
	while (i < n) {
		BST_Insert(T, str[i]);
		i++;
	}
}
// BST的删除
// 1.叶结点,直接删除
// 2.只有左子树或者右子树,让子树成为父结点的子树
// 3.左右子树都有,令直接后继或直接前驱替代,转化为1或2
