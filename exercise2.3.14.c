// 设A和B是两个单链表(带头结点),其中元素递增有序,设计一个算法从A和B中
// 公共元素产生单链表C,要求不破坏A/B的结点
// 时间复杂度O(max(n, m)) 空间复杂度O(max(n, m))
LinkList Common(LinkList A, LinkList B) {
	Node *p = A->next, *q = B->next, *r, *s;
	LinkList C = (LinkList)malloc(sizeof(Node));
	// r始终指向C的尾结点
	r = C;
	while (p != NULL && q != NULL) {
		if (p->data > q->data) {
			q = q->next;
		} else if (p->data < q->data) {
			p = p->next;
		} else {
			// 创建新结点
			s = (Node*)malloc(sizeof(Node));
			s->data = p->data;
			// 尾插法
			r->next = s;
			r = s;
			p = p->next;
			q = q->next;
		}
	}
	// 置C尾结点为空
	r->next = NULL;
	return C;
}