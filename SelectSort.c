// 简单选择排序
// 时间复杂度始终为O(n^2) 空间复杂度O(1)
void SelectSort(ElemType A[], int n) {
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[min]) min = j;
		}
		if (min != i) Swap(A[i], A[min]);
	}
}