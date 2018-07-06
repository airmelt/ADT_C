// 长度为n的顺序表L,编写一个时间复杂度为O(n),空间复杂度为O(1)的算法
// 该算法删除线性表中所有值为x的数据元素
void DeleteAllX(SqList &L, ElemType x) {
	// k记录等于x的个数
	int k = 0;
	for (int i = 0; i < L.length; i++) {
		// 等于k自增
		if (L.data[i] == x) {
			k++;
		// 不等于k前移k位
		} else {
			L.data[i - k] = L.data[i];
		}
		// 顺序表长度减少
		L.length -= k;
	}
}