// 设计一个高效的算法,将顺序表的所有元素逆置,要求算法的空间复杂度为O(1)
void Reverse(SqList &L) {
	for (int i = 0; i < L.length; i++) {
		L.data[i] = L.data[i] ^ L.data[L.length - 1 - i];
		L.data[L.length - 1 - i] = L.data[i] ^ L.data[L.length - 1 - i];
		L.data[i] = L.data[i] ^ L.data[L.length - 1 - i];
	}
}