// 试设计一个算法,判断一个数据序列是否构成一个小根堆
// 时间复杂度O(n) 空间复杂度O(1)
bool isMinHeap(ElemType A[], int len) {
	if (len % 2 == 0) {
		if (A[len / 2] > A [len]) return false;
		for (int i = len / 2 - 1; i > 0; i--) {
			if (A[i] > A[i * 2] || A[i] > A[i * 2 + 1]) return false;
		}
	} else {
		for (int i = len / 2; i > 0; i--) {
			if (A[i] > A[i * 2] || A[i] > A[i * 2 + 1]) return false;
		}
	}
	return true;
}