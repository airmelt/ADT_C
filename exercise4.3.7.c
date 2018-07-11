// 二叉树按二叉链表形式存储结构存储,试设计一个算法,判别完全二叉树的算法
// 层次遍历,空结点之后还有结点的情况下非完全二叉树
// 时间复杂度O(n) 空间复杂度O(n)
bool IsComplete(BiTree T) {
	if (!T) return true;
	Queue Q;
	BiTree p;
	InitQueue(Q);
	EnQueue(Q, T);
	while (!QueueEmpty(Q)) {
		DeQueue(Q, p);
		if (p) {
			EnQueue(Q, p->lchild);
			EnQueue(Q, p->rchild);
		} else {
			while (!QueueEmpty(Q)) {
				DeQueue(Q, p);
				if (p) return false;
			}
		}
	}
	return true;
}