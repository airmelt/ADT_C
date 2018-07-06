// 从有序顺序表中删除所有其值重复的元素,使表中所有元素的值均不同
bool DeleteSame(SqList &L) {
	if (L.length == 0) {
		return false;
	}
	for (int i = 0, j = 1; j < L.length; j++) {
		if (L.data[i] != L.data[j]) {
			L.data[++i] = L.data[j];
		}
	}
	L.length = i + 1;
	return true;
}