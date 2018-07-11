// 试给出二叉树的自下而上,从右到左的层次遍历算法
// 出队的时候同时将结点入栈,从栈顶开始依次访问
// 时间复杂度O(n) 空间复杂度O(n)
void ReverseLevel(BiTree T) {
	Stack S;
	Queue Q;
	BiTree p;
	if (T != NULL) {
		InitStack(S);
		InitQueue(Q);
		EnQueue(Q, T);
		while (!QueueEmpty(Q)) {
			DeQueue(Q, p);
			Push(S, p);
			if (p->lchild) EnQueue(Q, p->lchild);
			if (p->rchild) EnQueue(Q, p->rchild);
		}
		while (!StackEmpty(S)) {
			Pop(S, p);
			visit(p);
		}
	}
}