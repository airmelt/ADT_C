// 按值查找表结点
// 本算法查找单链表L(带头结点)中数据域值等于e的结点指针,否则返回NULL
Node *LocateElem(LinkList L, ElemType e) {
	Node *p = L->next;
	while (p != NULL && p->data != e)
		p = p->next;
	return p;
}
// 时间复杂度O(n)