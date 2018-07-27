// 设顺序表用数组A[]表示,表中元素存储在数组下标1~m+n的范围内,前m个元素递增有序
// 后n个元素递增有序,设计一个算法,使得整个顺序表有序
// 1.插入排序 时间复杂度O(mn) 空间复杂度O(1)
void Insert_Sort(ElemType A[], int m, int n) {
	int i, j;
	for (i = m + 1;i <= m + n; i++) {
		A[0] = A[i];
		for (j = i - 1; A[j] > A[0]; j--) A[j + 1] = A[j];
		A[j + 1] = A[0];
	}
}
// 2.归并排序 时间复杂度O(m + n) 空间复杂度O(m + n)