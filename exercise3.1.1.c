// 假设以I和O分别表示入栈和出栈操作.栈的初态和终态均为空,入栈和出栈的操作序列
// 可表示为仅由I和O组成的序列,可以操作的序列称为合法序列,否则称为非法序列.
// 设计一个算法,判定所给的操作序列是否合法.若合法返回true,否则返回false.
// 时间复杂度O(n) 空间复杂度O(1)
bool Legal(char A[]) {
	int i = 0;
	int j = k = 0;
	while (A[i] != '\0') {
		switch (A[i]) {
			case 'I' :
			j++;
			break;
			case 'O' :
			k++;
			break;
			if (k > j) {
				printf("序列非法\n");
				return false;
			}
		}
		i++;
		if (j != k) {
			printf("序列非法\n");
			return false;
		} else {
			printf("序列合法\n");
			return true;
		}
	}
}