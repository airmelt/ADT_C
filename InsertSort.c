// 时间复杂度O(n^2) 空间复杂度O(1)
// 直接插入排序
void InsertSort(ElemType A[], int n) {
	int i, j;
	for (i = 2; i <= n; i++) {
		if (A[i].key < A[i - 1].key) {
			// 复制为哨兵,A[0]不存放任何元素
			A[0] = A[i];
			// 向后挪位
			for (j = i - 1; A[0].key < A[j].key; --j) A[j + 1] = A[j];
			A[j + 1] = A[0];
		}
	}
}
// 折半插入排序
void InsertSortB(ElemType A[], int n) {
	int i, j, low, high, mid;
	for (i = 2; i <= n; i++) {
		A[0] = A[i];
		low = 1;
		high = i - 1;
		while (low <= high) {
			mid = (low + high) / 2;
			if (A[mid].key > A[0].key) high = mid - 1;
			else low = mid + 1;
		}
		for (j = i - 1; j >= high; j--) A[j + 1] = A[j];
		A[high + 1] = A[0];
	} 
}