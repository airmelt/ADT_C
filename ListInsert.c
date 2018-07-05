// 时间复杂度O(n)
bool ListInsert(SqList &L, int i, ElemType e) {
	// 本算法实现将元素e插入到顺序表L中的第i个位置
	if (i < 1 || i > L.length + 1)      // 判断i的范围是否有效
		return false;
	if (L.length >= MaxSize)            // 当前存储空间已满,不能插入
		return false;
	for (int j = L.length; j >= i; j--) // 将第i个元素及之后的元素后移
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;                  // 在位置i处放入e
	L.length++;                         // 线性表长度加1 
	return true;
}
