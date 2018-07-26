// 冒泡排序
// 时间复杂度O(n^2) 空间复杂度O(1)
void BubbleSort(ElemType A[], int n) {
	// 记录本趟冒泡是否发生交换的标志
	bool flag = false;
	for (int i = 0; i < n - 1; i++) {
		flag = false;
		for (j = n - 1 ; j > i; j--) {
			if (A[j - 1].key > A[j].key) {
				//swap(A[j - 1], A[j]);
				A[j - 1] ^= A[j];
				A[j] ^= A[j - 1];
				A[j - 1] ^= A[j];
				flag = true;
			}
			if (flag == false) return;
		}
	}
}