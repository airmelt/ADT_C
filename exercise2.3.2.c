// 在带头结点的单链表中,删除所有值为x的结点,并释放其空间,假设值为x的结点不唯一
// 时间复杂度O(n) 空间复杂度O(1)
void DeleteX(LinkList &L, ElemType x) {
	Node *p = L->next;
	Node *pre = L;
	Node *q;
	while (p != NULL) {
		if (p->data == x) {
			pre->next = p->next;
			q = p;
			p = p->next;
			free(q);
			// 也可以是
			// q = p;
			// p = p->next;
			// pre->next = p;
		} else {			
			pre = p;
			p = p->next;
		}
	}
}