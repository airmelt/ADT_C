// 改进的模式匹配算法
// 求next数组
void get_next(char T[], int next[]) {
	i = 1;
	next[1] = 0;
	j = 0;
	// T[0]用于保存字符串的长度
	while (i <= T[0]) {
		if (j == 0 || T[i] == T[j]) {
			++i;
			++j;
			next[i] = j;
		} else {
			j = next[j];
		}
	}
}
// 利用模式串T的next函数求T在主串S中第pos个字符之后的位置的KMP算法
int KMP(char S[], char T[], int next[], int pos) {
	i = pos;
	j = 1;
	while (i <= S[0] && j <= T[0]) {
		if (j == 0 || S[i] == T[j]) {
			++i;
			++j;
		} else j = next[j];
	}
	if (j > T[0]) return i - T[0];
	else return 0;
}