// 设由两个栈s1,s2都采用顺序栈方式,并且共享一个存储区[0, ..., maxsize - 1]
// 为了尽量利用空间,减少溢出的可能,可采用栈顶相向,迎面增长的存储方式.试设计
// s1,s2有关入栈和出栈的操作算法
#define maxsize 100

#define ElemType int
typedef struct {
	ElemType stack[maxsize];
	int top[2];
}stack;
stack s;
// 入栈操作
int push(int i, ElemType x) {
	if (i < 0 || i > 1) {
		printf("栈号输入错误\n");
		exit(0);
	}
	if (s.top[1] - s.top[0] == 1) {
		printf("栈已满\n");
		return 0;
	}
	switch (i) {
		case 0 :
		s.stack[++s.top[0]] = x;
		return 1;
		case 1 :
		s.stack[--s.top[1]] = x;
		return 1;
	}
}
// 出栈操作
ElemType pop(int i) {
	if (i < 0 || i > 1) {
		printf("栈号输入错误\n");
		exit(0);
	}
	switch (i) {
		case 0 :
		if (s.top[0] == -1) {
			printf("栈空\n");
			return -1;
		} else {
			return s.stack[s.top[0]--];
		}
		case 1 :
		if (s.top[1] == -1) {
			printf("栈空\n");
			return -1;
		} else {
			return s.stack[s.top[1]++];
		}
	}
}