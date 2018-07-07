// 有两个循环单链表,链表头指针分别为h1和h2,编写一个函数将链表h2链接到链表h1
// 之后,要求链接后的链表仍保持循环链表形式
// 时间复杂度O(max(m, n)) 空间复杂度O(1)
void Link(LinkList &h1, LinkList &h2) {
	Node *p = h1, *q = h2;
	while (p->next != NULL) {
		p = p->next;
	}
	while (q->next != NULL) {
		q = q->next;
	}
	p->next = h2;
	q->next = h1;
}