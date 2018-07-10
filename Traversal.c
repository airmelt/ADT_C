// 时间复杂度O(n) 空间复杂度O(n)
// 每个结点都访问且只访问一次,递归工作栈的栈深恰好为树的深度
// 先序遍历(NLR)
void PreOrder(BiTree T) {
	if (T != NULL) {
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
// 中序遍历(LNR)
void InOrder(BiTree T) {
	if (T != NULL) {
		InOrder(T->lchild);
		visit(T);
		InOrder(T->rchild);
	}
}
// 后序遍历(LRN)
void PostOrder(BiTree T) {
	if (T != NULL) {
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		visit(T);		
	}
}
// 中序遍历的非递归算法
// 借助栈,先扫描左结点入栈,然后出栈
void InOrder2(BiTree T) {
	// 二叉树中序遍历的非递归算法,算法需要借助一个栈
	InitStack(S);
	// p是遍历指针
	BiTree p = T;
	// 栈非空或p非空时循环
	while (p || !IsEmpty(S)) {
		if (p) {
			// 根指针进栈,遍历左子树
			Push(S, p);
			// 每遇到非空二叉树,先向左走
			p = p->lchild;
		} else {
			// 根指针退栈,访问根结点,遍历右子树
			// 退栈
			Pop(S, p);
			// 访问根结点
			visit(p);
			// 再向右子树走
			p = p->rchild;
		}
	}
}
// 后序遍历非递归算法(较难)
// 需要判断上次访问的结点是位于左子树还是右子树,若位于左子树,则需要跳过
// 根结点,先进入右子树,再回头访问根结点;若位于右子树,则直接访问根结点
void PostOrder2(BiTree T) {
	InitStack(S);
	BiTree p = T;
	// 上次访问结点
	BiTree pVisit = NULL;
	// 先移动p到左子树的最下边
	while (p) {
		Push(S, p);
		p = p->lchild;
	}
	while (!IsEmpty(S)) {
		Pop(S, p);
		// 一个根结点被访问:无右子树或者右子树已经被访问过
		if (p->rchild == NULL || p->rchild == pVisit) {
			visit(p);
			pVisit = p;
		} else {
			Push(S, p);
			// 访问右子树,且右子树一定不为空
			p = p->rchild;
			while (p) {
				Push(S, p);
				p = p->lchild;
			}
		}
	}
}
// 层次遍历
// 需要借助一个队列.先将根结点入队,然后出队,访问该结点
// 将子树根结点入队,出队.直到队列为空
void LeverOrder(BiTree T) {
	InitQueue(Q);
	BiTree p;
	EnQueue(Q, T);
	while (!IsEmpty(Q)) {
		DeQueue(Q, p);
		visit(p);
		if (p->lchild != NULL) {
			EnQueue(Q, p->lchild);
		}
		if (p->rchild != NULL) {
			EnQueue(Q, p->rchild);
		}
	}
}