// 初始化
void InitStack(&S) {
	s.top = -1;
}

// 判断栈空
bool StackEmpty(S) {
	if (s.top == -1) 
		return true;
	else 
		return false;
}

// 进栈
bool Push(SqStack &S, ElemType x) {
	if (S.top == MaxSize - 1) 
		return false;
	S.data[++S.top] = x;
	return true;
}

// 出栈
bool Pop(SqStack &S, ElemType &x) {
	if (S.top == -1)
		return false;
	x = S.data[S.top--];
	return true;
}

bool GetTop(SqStack S, ElemType &x) {
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	return true;
}