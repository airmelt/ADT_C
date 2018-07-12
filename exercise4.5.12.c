// 编写一个递归算法,在一棵有n个结点的随机建立起来的二叉排序树上查找第k(1 <= k
// <= n)小的元素,并返回指向该结点的指针.要求算法的平均时间复杂度为O(log2n).
// 二叉排序树的每个结点中除data,lchild,rchild等数据成员外,增加一个count成员,
// 保存以该结点为根的子树上的结点个数
BSTNode *SearchK(BSTNode *T, int k) {
	if (k < 1 || k > T->count) return NULL;
	if (T->lchild == NULL) {
		if (k == 1) return T;
		return SearchK(T->rchild, k - 1);
	} else {
		if (T->lchild->count == k - 1) return T;
		if (T->lchild->count > k - 1) return SearchK(T->lchild, k);
		else return SearchK(T->rchild, k - (T->rchild->count + 1));
	}
}