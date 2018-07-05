// 时间复杂度O(n)
int LocateElem(SqList L, ElemType e) {
	// 本算法实现查找顺序表中值为e的元素,如果查找成功,返回元素位序,否则返回0
	int i;
	for (i = 0; i < L.length; i++) {
		if (L.data[i] == e) 
			return i + 1;             // 下标为i的元素值等于e,返回其位序i+1
	}								  // 退出循环,说明查找失败
	return 0;
}