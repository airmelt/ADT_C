// 设一线性表,采用带头结点的hc单链表存放,设计一个就地算法,将其拆分成两个表
// A为偶数项,正序,B为奇数项,逆序
// 时间复杂度O(n) 空间复杂度O(n)
void DisReverse(LinkList &A) {
	Node *p = A->next; *q
	LinkList B = (LinkList)malloc(sizeof(Node));
	B->next = NULL;
	Node *ra = A;
	while (p != NULL) {
		ra->next = p;
		ra = p;
		p = p->next;
		q = p->next;
		p->next = B->next;
		B->next = p;
		p = q;
	}
	ra->next = NULL:
	return B;
}