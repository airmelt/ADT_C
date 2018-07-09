// 利用一个栈实现以下递归函数的非递归计算:Pn(x);1, n=0;2x, n=1;
// 2xPn-1(x) - 2(n - 1)Pn-2(x) n>1;
// 时间复杂度O(n) 空间复杂度O(n)
double P(int n, double x) {
	struct stack{
		int m;
		double val;
	}stack[MaxSize];
	int top = -1, i;
	double f1 = 1, f2 = 2 * x;
	for (i = n; i >= 2; i--) {
		top++;
		st[top].m = i;
	}
	while (top >= 0) {
		st[top].val = f2 * 2 * x - f1 * (st[top].m - 1) * 2;
		f1 = f2;
		f2 = st[top].val;
		top--;
	}
	if (n == 0) return f1;
	return f2;
}