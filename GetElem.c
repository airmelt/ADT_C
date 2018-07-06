// 按序号查找结点值
// 本算法取出单链表L(带头结点)中第i个位置的结点指针
Node *GetElem(LinkList L, int i) {
	int j = 1;
	Node *p = L->next;
	if (i == 0)
		return L;
	if (i < 1)
		return NULL;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	// 返回第i个节点的指针,如果i大于表长,p=NULL,直接返回p
	return p;
}
// 时间复杂度O(n)