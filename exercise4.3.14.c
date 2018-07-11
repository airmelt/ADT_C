// 假设二叉树采用二叉链表存储结构,设计一个算法,求非空二叉树b的宽度(即具有结点数
// 最多的那一层的结点个数)
// 时间复杂度O(n) 空间复杂度O(n)
// 层次遍历
typedef struct {
	// 保存队列中的结点指针
	BiTree data[Maxsize];
	// 保存data中相同下标结点的层次,即同一层结点
	int level[Maxsize];
	int front, rear;
}Queue;
int Width(BiTree T) {
	BiTree p;
	int k, max, i, n;
	Queue Q;
	Q.front = Q.rear = -1;
	// 保存根结点
	Q.rear++;
	Q.data[Q.rear] = T;
	Q.level[Q.rear] = 1;
	while (Q.front < Q.rear) {
		Q.front++;
		p = Q.data[Q.front];
		k = Q.level[Q.front];
		// 保存子结点,层次加1
		if (p->lchild != NULL) {
			Q.rear++;
			Q.data[Q.rear] = p->lchild;
			Q.level[Q.rear] = k + 1;
		}
		if (p->rchild != NUll) {
			Q.rear++;
			Q.data[Q.rear] = p->rchild;
			Q.level[Q.rear] = k + 1;
		}
	}
	max = 0;
	i = 0;
	k = 1;
	while (i <= Q.rear) {
		n = 0;
		// 分层次统计各层结点数
		while (i <= Q.rear && Q.level[i] == k) {
			n++;
			i++;
		}
		k = Q.level[i];
		if (n > max) max = n;
	}
	return max;
}