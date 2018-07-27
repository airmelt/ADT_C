// 荷兰国旗问题:设有一个仅由红,蓝,白三种颜色的条块组成的条块序列,请编写一个时间
// 复杂度为O(n)的算法,使得这些条块按红,白,蓝的顺序排好,即排成荷兰国旗图案.
// 设置枚举数组
typedef enum{RED, WHITE, BLUE} color;
void Flag_Arrange(color A[], int n) {
	int i = 0, j = 0, k = n - 1;
	while (j <= k) {
		switch (A[j]) {
			case RED: 
				Swap(A[i], A[j]);
				i++;
				j++;
				break;
			case WHITE:
				j++;
				break;
			// 没有j++以防止交换后A[j]仍为蓝色的情况
			case BLUE:
				Swap(A[j], A[k]);
				k--;
		}
	}
}