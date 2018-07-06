// 从顺序表中删除具有最小值的元素(假设唯一)并由函数返回被删元素的值.
// 空出的位置由最后一个元素填补,若顺序表为空则显示出错信息并退出运行
bool DeleteMin(SqList &L, ElemType &value) {
	// 通过引用型参数value返回最小值
	if (L.length == 0)
		return false;
	value = L.data[0];
	int pos = 0;
	for (int i = 1; i < L.length; i++) {
		if (L.data[i] < value) {
			pos = i;
			value = L.data[i];
		}
	}
	// 空出的位置由最后一个元素填补
	L.data[pos] = L.data[L.length - 1];
	L.length--;
	return true;
}