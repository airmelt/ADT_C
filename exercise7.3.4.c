// 试重新编写考点精析中的快速排序的划分算法,使之每次选取的枢轴值都是随机地从
// 当前子表中选择的
int Partition2(ElemType A[], int low, int high) {
	int rand_Index = low + rand() % (high - low + 1);
	Swap(A[rand_Index], A[low]);
	ElemType pivot = A[low];
	int i = low;
	for (int j = low + 1; j <= high; j++) {
		if (A[j] < pivot) Swap(A[++i], A[j]);
	}
	Swap(A[i], A[low]);
	return i;
}