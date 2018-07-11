// 假设二叉树采用二叉链表存储结构,设计一个非递归算法求二叉树的高度
// 采用层次遍历
// 时间复杂度O(n) 空间复杂度O(n)
int Height(BiTree T) {
	if (!T) return 0;
	int front = -1, rear = -1;
	// last指向这一层最后一个结点的位置
	int last = 0, level = 0;
	// 设置队列Q,元素是二叉树结点指针且容量足够
	BiTree Q[Maxsize];
	// 将根结点入队
	Q[++rear] = T;
	BiTree p;
	// 队不空,则循环
	while (front < rear) {
		// 队列元素出队,p即正在访问的结点
		p = Q[++front];
		// 左孩子入队
		if (p->lchild) Q[++rear] = p->lchild;
		// 右孩子入队
		if (p->rchild) Q[++rear] = p->rchild;
		// 处理该层的最右结点
		if (front == last) {
			// 层数+1
			level++;
			// last指向下层
			last = rear;
		}
	}
	return level;
} 
// 递归算法
int Height2(BiTree T) {
	if (!T) return 0;
	int l = Height2(T->lchild);
	int r = Height2(T->rchild);
	return (l > r) ? l + 1 : r + 1;
}