// 已知一颗二叉树按顺序存储结构进行存储,设计一个算法,求编号分别为i和j的两个结点
// 的最近的公共祖先结点的值
// 时间复杂度O(logn) 空间复杂度O(1)
ElemType FindAncestor(SqTree T, int i, int j) {
	if (T[i] != '#' && T[j] != '#') {
		while(i != j) {
			if (i > j) i /= 2;
			else j /= 2;
		}
	}
	return T[i];
}