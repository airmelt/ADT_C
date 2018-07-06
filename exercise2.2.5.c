// 从顺序表中删除其值在给定值s与t之间(包含s和t,要求s<t)的所有元素,如果s或t不合理
// 或者顺序表为空则显示出错信息并退出运行
bool DelFromTo(SqList &L, ElemType s, ElemType t) {
	if (s >= t || L.length == 0) {
		return false;
	}
	// 记录删除的个数
	int i;
	int k;
	for (i = 0; i < L.length && L.data[i] < s; i++) {
		if (L.data[i] >= s && L.data[i] <= t) {
			k++;
		// 前移k个位置
		} else {
			L.data[i - k] = L.data[i];
		}
	}
	if (k == 0) 
		return false;
	// 长度减少
	L.length -= k;
	return true;
}