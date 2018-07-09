// 假设一个算术表达式中包含圆括号,方括号和花括号3种类型的括号,编写一个算法来
// 判别表达式中的括号是否配对,以字符"\0"作为算术表达式的结束符
// 时间复杂度O(n) 空间复杂度O(n)
bool isPair(char *str) {
	InitStack(S);
	ElemType x;
	int i = 0;
	while (str[i] != '\0') {
		switch (str[i]) {
			case '(' : 
			Push(S, str[i]);
			break;
			case '[' :
			Push(S, str[i]);
			break;
			case '{' :
			Push(S, str[i]);
			break;
			case ')' :
			Pop(S, x);
			if (x != '(') return false;
			break;
			case ']' :
			Pop(S, x);
			if (x != '[') return false;
			break;
			case '}' :
			Pop(S, x);
			if (x != '{') return false;
			break;
			default :
			break;
		}
	}
	i++;
	if (!StackEmpty(S)) {
		printf("括号不匹配\n");
		return false;
	printf("括号匹配\n");
	return true;
}