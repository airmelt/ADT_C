// 在二叉树中查找值为x的结点,试编写算法(用C语言)打印值为x的结点的所有祖先,
// 假设值为x的结点不多于1个
// 后序遍历
// 时间复杂度O(n) 空间复杂度O(n)
typedef struct {
	BiTree t;
	// tag = 0表示左子女被访问,tag = 1表示右子女被访问
	int tag
}stack;
void PrintX(BiTree T, ElemType x) {
	stack s[MaxSize];
	int top = 0;
	while (T != NULL || top > 0) {
		while (T != NULL && T->data != x) {
			s[++top].t = T;
			s[top].tag = 0;
			T = T->lchild;
		}
		if (T->data == x) {
			printf("x的所有祖先为:\n");
			for (int i = 1; i <= top; i++)
				printf("%d\n", s[i].t->data);
				exit(1);
		}
		while (top != 0 && s[top].tag == 1) top--;
		if (top != 0) {
			s[top].tag = 1;
			T = s[top].t->rchild;
		}
	}
}