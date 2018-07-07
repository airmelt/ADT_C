// 试编写算法将带头结点的单链表就地逆置,要求空间复杂度为O(1)
// 时间复杂度O(n)
LinkList Reverse(LinkList &L) {
	// p为工作指针,r为p的后继,以防断链
	Node *p = L->next, *r;
	// 从第一个元素结点开始
	// 先将头结点L的next置为NULL,给p做准备
	L->next = NULL;
	// 依次将元素结点摘下
	while (p != NULL) {
		// 暂存p的后继
		r = p->next;
		// 将p结点插入到头结点之后
		p->next = L->next;
		L->next = p;
		p = r;
	}
	return L;
}
// 解法2
LinkList Reverse2(LinkList &L) {
	Node *p = L->next, *pre, *r = p->next;
	// 处理第一个结点
	p->next = NULL;
	// r为空,则说明p为最后一个结点
	while(r != NULL) {
		// 依次遍历
		pre = p;
		p = r;
		r = r->next;
		// 指针反转
		p->next = pre;
	}
	// 处理最后一个结点
	L->next = p;
	return L;
}