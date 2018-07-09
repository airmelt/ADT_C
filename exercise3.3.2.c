// 车厢调度,入口处由n节硬座和软座车厢(分别以H和S表示)等待调度,试编写算法,输出
// 对这n节车厢进行调度的操作(即入栈或出栈操作)序列,以使所有的软座车厢都被调整
// 到硬座车厢之前
// 时间复杂度O(n) 空间复杂度O(n)
void Train(char &train) {
	InitStack(S);
	char *p = train, *q = tarin, c;
	ElemType e;
	while (*p) {
		if (*p == 'H') {
			Push(S, *p);
		} else {
			*(q++) = *p;
		}
		p++;
	}
	while (!StackEmpty(S)) {
		Pop(S, e);
		*(q++) = e;
	}
}