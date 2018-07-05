// 时间复杂度O(n)
// &e 引用
bool ListDelete(SqList &L, int i, ElemType &e) {
	// 本算法实现删除顺序表L中的第i个位置的元素
	if (i < 1 || i > L.length + 1)       // 判断i的范围是否有效
		return false;	 				 
	e = L.data[i - 1];					 // 将被删除的元素赋值给e
	for (int j = i; j < L.length; j++) { // 将第i个位置之后的元素前移
		L.data[j - 1] = L.data[j];
	}
	L.length--;                          // 线性表长度减1
	return true;
}