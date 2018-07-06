// 线性表中元素递增有序且按顺序存储于计算机内.要求设计一算法完成用
// 最少时间在表中查找数值为x的元素,若找到将其与后继元素位置相交换,
// 若找不到将其插入到表中并使表中元素仍递增有序
void SerachExchangeInsert(ElemType A[], ElemType x) {
	int low = 0, high = n - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (A[mid] == x) break;
		else if (A[mid] < x) low = mid + 1;
		else high = mid - 1;
	}
	if (A[mid] == x && mid != n - 1) {
		A[mid] = A[mid] ^ A[mid + 1];
		A[mid + 1] = A[mid] ^ A[mid + 1];
		A[mid] = A[mid] ^ A[mid + 1];
	}
	if (low > high) {
		for (int i = n - 1; i > high; i--) A[i + 1] = A[i];
			A[i + 1] = x;
	}
}