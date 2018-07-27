// 试编写一个算法,使之能够在数组L[1...n]中找出第k小的元素(即从小到大排序后
// 处于第k个位置的元素)
// 时间复杂度O(n) 空间复杂度平均O(logn)
int kth_elem(int A[], int low, int high, int k) {
	int pivot = A[low];
	int low_temp = low;
	int high_temp = high;
	while (low < high) {
		while (low < high && A[high] >= pivot) --high;
		A[low] = A[high];
		while (low < high && A[low] <= pivot) ++low;
		A[high] = A[low];
	}
	A[high] = A[low];
	A[low] = pivot;
	if (low == k) return A[low];
	else if (low > k) return kth_elem(A, low_temp, low - 1, k);
	else return kth_elem(A, low + 1, high_temp, k - low);
}