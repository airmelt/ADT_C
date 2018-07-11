// 已知二叉树以二叉链表存储,编写算法完成:对于树中每一个元素值为x的结点,删去以它
// 为根的子树,并释放相应的空间
// 层次遍历
// 时间复杂度O(n) 空间复杂度O(n)
void DeleteTree(BiTree &T) {
	if (T != NULL) {
		DeleteTree(T->lchild);
		DeleteTree(T->rchild);
		free(T);
	}
}
void DeleteX(BiTree &T, ElemType x) {
	BiTree Q[Maxsize];
	if (T != NULL) {
		if (T->data == x) {
			DeleteTree(T);
			exit(0);
		}
		InitQueue(Q);
		BiTree p;
		EnQueue(Q, T);
		while(!QueueEmpty(Q)) {
			DeQueue(Q, p);
			if (p->lchild) {
				if (p->lchild->data == x) {
					DeleteTree(p->lchild);
					p->lchild = NULL;
				} else EnQueue(Q, p->lchild);
			}
			if (p->rchild) {
				if (p->rchild->data == x) {
					DeleteTree(p->rchild);
					p->rchild = NULL;
				} else EnQueue(Q, p->rchild);
			}
		}
	}
}