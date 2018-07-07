// 设L为带头结点的单链表,编写算法实现从尾到头反向输出每个结点的值
// 递归调用,用栈实现
// 时间复杂度O(n) 空间复杂度O(1)
void Reverse(LinkList L) {
	if (L->next != NULL) {
		Reverse(L->next);
	}
	print(L->data);
}