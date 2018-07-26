// 希尔排序
// 时间复杂度约为O(n^1.3) 空间复杂度O(1)
void ShellSort(ElemType A[], int n) {
	for (int dk = n / 2; dk >= 1; dk /= 2) {
		for (int i = dk + 1; i <= n; ++i) {
			if (A[i].key < A[i - dk].key) {
				A[0] = A[i];
				for (int j = i - dk; j > 0 && A[0].key < A[j].key; j -= dk) {
					A[j + dk] = A[j];
				}
				A[j + dk] = A[0];
			}
		}
	}
}