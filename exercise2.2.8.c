// 已知在一维数组A[m+n]中一次存放着两个线性表
// 试写一个函数,将数组中两个顺序表的位置互换
typedef int DataType
void Reverse(DataType A[], int left, int right, int arraySize) {
	if (left >= right || right >= arraySize) {
		return;
	}
	int mid = (left + right) / 2;
	for (int i = 0; i <= mid -left; i++) {
		A[left + i] = A[left + i] ^ A[right - i];
		A[right - i] = A[left + i] ^ A[right - i];
		A[left + i] = A[left + i] ^ A[right - i];
	}
}

void Exchange(DataType A[], int m, int n, int arraySize) {
	Reverse(A, 0, m + n - 1, arraySize);
	Reverse(A, 0, n - 1, arraySize);
	Reverse(A, n, m + n - 1, arraySize);
}