// 已知由n(n >= 2)个正整数构成的集合A = {ak | 0 <= k < n},将其划分为两个不
// 相交的子集A1和A2,元素个数分别是n1和n2,A1和A2中元素之和分别为S1和S2,设计
// 一个尽可能高效的划分算法,满足|n1 - n2|最小且|S1 - S2|最大.
// 平均时间复杂度O(n) 空间复杂度O(1)
int Part(int A[], int n) {
	int pivot;
	int low = 0, high = n - 1;
	int low_temp = low, high_temp = high;
	int k = n / 2;
	int i;
	int s1 = 0, s2 = 0;
	bool flag = true;
	while (flag) {
		pivot = A[low];
		while (low < high) {
			while (low < high && A[high] >= pivot) --high;
			if(low != high) A[low] = A[high];
			while (low < high && A[low] <= pivot) ++low;
			if(low != high) A[high] = A[low];
		}
		A[low] = pivot;
		if (low == k - 1) flag = false;
		else {
			if (low < k - 1) {
				low_temp = ++low;
				high = high_temp;
			} else {
				high_temp = --high;
				low = low_temp;
			}
		}
	}
	for (i = 0; i < k; i++) s1 += A[i];
	for (i = k; i < n; i++) s2 += A[i];
	return s2 - s1;
}