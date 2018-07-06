// 找出A的主元素x,x在A中出现次数大于n/2,A中元素范围[0, n)
// 若存在主元素,则输出该元素,否则输出-1
// 思路:记录元素出现次数,下一个元素相同则加1,次数到0时更换备选元素
// 第二次循环统计备选元素出现次数,大于n/2就输出
int Majority(int A[], int n) {
	int i
	int c = A[0]				// c用来保存候选主元素,count用来计数
	int count = 1;
	for (i = 1; i < n, i++) {   
		if (A[i] == c) {	    // 对候选主元素计数
			count++;
		} else {				
			if (count > 0) {	// 不是候选主元素
				count--;
			} else {
				c = A[i];		// 更换候选主元素
				count = 1;
			}
		}
	}
	if (count > 0) {
		count = 0;				// 统计实际出现次数
		for (i = 0; i < n; i++) {
			if (A[i] == c) {
				count++;
			}
		}
		if (count > n / 2) {
			return c;
		}
	}
	return -1;
}
// 时间复杂度O(n) 空间复杂度O(1)