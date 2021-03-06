// 建立大根堆
// 时间复杂度O(n) 空间复杂度O(1)
void BuildMaxHeap(ElemType A[], int len) {
	for (int i = len / 2; i > 0; i--) AdjustDown(A, i, len);
}
void AdjustDown(ElemType A[], int k, int len) {
	A[0] = A[k];
	for (int i = 2 * k; i <= len; i *= 2) {
		if (i < len && A[i] < A[i + 1]) i++;
		if (A[0] >= A[i]) break;
		else {
			A[k] = A[i];
			k = i;
		}
	}
	A[k] = A[0];
}
// 堆排序算法
// 时间复杂度O(nlogn) 空间复杂度O(1)
void HeapSort(ElemType A[], int len) {
	BuildMaxHeap(A, len);
	for (int i = len; i > 1; i--) {
		Swap(A[i], A[1]);
		AdjustDown(A, 1, i - 1);
	}
}
// 向上调整堆
void AdjustUp(ElemType A[], int k) {
	A[0] = A[k];
	int i = k / 2;
	while (i > 0 && A[i] < A[0]) {
		A[k] = A[i];
		k = i;
		i = k / 2;
	}
	A[k] = A[0];
}