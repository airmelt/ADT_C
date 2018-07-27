// 编写双向冒泡排序算法,在正反两个方向交替进行扫描,即第一趟把关键字最大的元素
// 放在序列的最后面,第二趟把关键字最小的元素放在序列的最前面.如此反复进行.
// 时间复杂度O(n^2) 空间复杂度O(1)
void DBubbleSort(ElemType A[], int n) {
	int low = 0, high = n - 1;
	bool flag = true;
	while (low < high && flag) {
		flag = false;
		for (int i = low; i < high; i++) {
			if (A[i] > A[i + 1]) {
				swap(A[i], A[i + 1]);
				flag = true;
			}
		}
		high--;
		for (int i = high; i > low; i--) {
			if (A[i] < A[i - 1]) {
				swap(A[i], A[i - 1]);
				flag = true;
			}
		}
		low++;
	}
}