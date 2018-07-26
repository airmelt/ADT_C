// 快速排序
// 时间复杂度O(nlogn) 空间复杂度O(logn)
// 最坏情况下 时间复杂度O(n^2) 空间复杂度O(n)
// 主程序,递归实现
void QuickSort(ElemType A[], int low, int high) {
	if (low < high) {
		int pivotpos = Partition(A, low, high);
		// 分治
		QuickSort(A, low, pivotpos - 1);
		QuickSort(A, pivotpos + 1, high);
	}
}
// 划分操作 
// 每次总是以当前表中第一个原属作为枢轴值(基准)对表进行划分
int Partition(ElemType A[], int low, int high) {
	ElemType pivot = A[low];
	while (low < high) {
		while (low < high && A[high] >= pivot) --high;
		// 将比枢轴值小的元素移动到左端
		A[low] = A[high];
		while (low < high && A[low] <= pivot) ++low;
		// 将比枢轴值大的元素移动到右端
		A[high] = A[low];
	}
	// 枢轴元素存放到最终位置
	A[low] = pivot;
	// 返回存放枢轴的最终位置
	return low;
}