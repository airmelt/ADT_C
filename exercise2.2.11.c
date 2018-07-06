// 找出两个等长序列的中位数
// 最优思路:分别求两个序列的中位数
// 比较两个数的大小,分别舍弃两个序列的一半不合要求的一部分
int M_Search(int A[], int B[], int n) {
	int s1 = 0, d1 = n - 1, s2 = 0, d2 = n - 1, m1, m2;
	while (s1 != d1 || s2 != d2) {
		m1 = (s1 + d1) / 2;
		m2 = (s2 + d2) / 2;
		if (A[m1] == B[m2])
			return A[m1];
		if (A[m1] < B[m2]) {
			if ((s1 + d1) % 2 == 0) {
				s1 = m1;
				d2 = m2;
			} else {
				s1 = m1 + 1;
				d2 = m2;
			}
		} else {
			if ((s2 + d2) % 2 == 0) {
				d1 = m1;
				s2 = m2;
			} else {
				d1 = m1;
				s2 = m2 + 1;
			}
		}
	}
	return A[s1] < B[s2] ? A[s1] : B[s2];
}
// 时间复杂度O(logn) 空间复杂度O(1)