// 已知线性表按顺序存储,且每个元素都是不相同的整数型元素,设计把所有奇数移动到
// 所有偶数前面的算法(要求时间最少,辅助空间最少)
// 时间复杂度O(n) 空间复杂度O(1)
void move(ElemType A[], int n) {
	int low = 0, high = n - 1;
	while (low < high) {
		while (low < high && A[low] % 2 != 0) low++;
		while (low < high && A[high] % 2 != 1) high--;
		if (low < high) swap(A[low], A[high]);
		low++;
		high--;
	}
}