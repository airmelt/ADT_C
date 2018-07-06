// 将值为e的新结点插入到单链表的第i个位置上
// 查找时间复杂度O(n) 插入时间复杂度O(1)
void Insert(LinkList *L, int i, ElemType e) {
	// 查找插入位置的前驱结点
	int j;
	LinkList p, s;
	p = *L;
	j = 1;
	while (p && j < i) {
		p = p->next;
		++j;
	}
	if (!p || j > i) {
		return;
	}
	Node s = new Node(e);
	// 以下两步一定不能颠倒
	s->next = p->next;     // 将p的后继结点赋值个给s的后继
	p->next = s; 		   // 将s赋值给p的后继
	// 前插操作 交换p->data和s->data即可
	// temp = p->data;
	// p->data = s->data;
	// s->data = temp;
}