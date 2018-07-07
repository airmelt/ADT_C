// 假设有两个按元素递增次序排列的线性表,均以单链表形式存储.请编写算法将这两
// 个单链表归并为一个按元素值递减次序排列的单链表,并要求利用原来两个单链表
// 的结点存放归并后的单链表
// 时间复杂度(m + n) 空间复杂度O(1)
void Merge(LinkList &A, LinkList &B) {
	Node *p = A->next, *h = A, r;
	Node *q = B->next;
	h->next = NULL
	while (p != NULL && q != NULL) {
		if (p->data < q->data) {
			r = p->next;
			p->next = h->next;
			h->next = p;
			p = r;
		} else {
			r = q->next;
			q->next = h->next;
			h->next = q;
			q = r;
		}
	}
	// 处理剩下的非空
	if (p != NULL) {
		q = p;
	}
	// 按头插法插入
	while (q != NUll) {
		r = q->next;
		q->next = h->next;
		h->next = q;
		q = r;
	}
	free(B);
}