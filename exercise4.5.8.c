// 利用二叉树遍历的思想编写一个判断二叉树是否是平衡二叉树的算法
// 时间复杂度O(n) 空间复杂度O(logn)
bool IsBalance(BiTree T) {
	if (T == NULL) return true;
	return Helper(T) > 0;
}
int Helper(BiTree T) {
	if (T == NULL) return 0;
	int left = Helper(T->lchild);
	int right = Helper(T->rchild);
	// 子树不平衡,不计算,直接返回-1
	if (left < 0 || right < 0) return -1;
	// 子树不平衡,返回-1
	if ((left - right) > 1 || (right - left) > 1) return -1;
	// 子树平衡,返回真实深度
	return (left > right) ? (left + 1) : (right + 1);
}