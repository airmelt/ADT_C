// 利用2个栈S1,S2来模拟一个队列,已知栈的4个运算定义:Push(S, x),Pop(S, x),
// StackEmpty(S),StackOverflow(S)实现队列的3个运算EnQueue,DeQueue,QueueEmpty
bool EnQueue(Stack &S1, Stack &S2, ElemType x) {
	if (!StackOverflow(S1)) {
		Push(S1, x);
		return true;
	}
	if (StackOverflow(S1) && !StackEmpty(S2)) {
		printf("队列已满\n");
		return false;
	}
	ElemType e;
	if (StackOverflow(S1) && StackEmpty(S2)) {
		while (!StackEmpty(S1)) {
			Pop(S1, e);
			Push(S2, e);
		}
	}
	Push(S1, x);
	return true;
}
void DeQueue(Stack &S1, Stack &S2, ElemType &x) {
	if (!StackEmpty(S2)) {
		Pop(S2, x);
	} else if (StackEmpty(S1)) {
		printf("队列为空\n");
	} else {
		ElemType e;
		while (!StackEmpty(S1)) {
			Pop(S1, e);
			Push(S2, e);
		}
		Pop(S2, x);		
	}
}
bool QueueEmpty(Stack S1, Stack S2) {
	if (StackEmpty(S1) && StackEmpty(S2)) return true;
	return false;
}