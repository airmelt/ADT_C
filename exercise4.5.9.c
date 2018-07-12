// 设计一个算法,求出给定二叉排序树中最小和最大的关键字
// 最小的值在最左下角,最大的值在最右下角
void MinMax(BiTree T, KeyType &min, KeyType &max) {
	BiTree L = T;
	BITree R = T;
	while (L->lchild != NULL) {
		L = L->lchild;
	}
	min = L->data;
	while (R->rchild != NULL) {
		R = R->rchild;
	}
	max = R->data;
}