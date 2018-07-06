// 从有序顺序表中删除其值在给定值s与t之间(要求s<t)的所有元素,如果s或t不合理
// 或者顺序表为空则显示出错信息并退出运行
bool DelFromTo(SqList &L, ElemType s, ElemType t) {
	if (s >= t || L.length == 0) {
		return false;
	}
	// 记录s和t的值的位置
	int i;
	int j;
	// 找到>=s的第一个元素
	for (i = 0; i < L.length && L.data[i] < s; i++) ;
	// 未找到返回false
	if (i >= L.length)
		return false;
	// 找到>t的第一个元素
	for (j = i; j < L.length && L.data[j] <= t; j++) ;
	// 前移
	for (; j < L.length; i++, j++)
		L.data[i] = L.data[j];
	// 改变数组大小
	L.length = i + 1;
	return true; 
}