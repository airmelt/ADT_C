// 将一个带头结点的单链表A分解为两个带头结点的单链表A和B,使得A表中含有原表
// 中序号为奇数的元素,而B表中含有原表中序号为偶数的元素,且保持相对顺序不变
// 时间复杂度O(n) 空间复杂度O(n)
void DisTwo(LinkList &A) {
	int i = 0;
	// LinkList B = new LinkList();
	LinkList B = (LinkList)malloc(sizeof(Node));
	B->next = NULL;
	Node *ra = A, *rb = B;
	Node p = A->next;
	A->next = NULL;
	while (p != NULL) {
		if (i % 2 == 0) {
			rb->next = p;
			rb = p;
		} else {
			ra->next = p;
			ra = p;
		}
		i++;
		p = p->next;
	}
	ra->next = NULL;
	rb->next = NULL;
	return B;
}