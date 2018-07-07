// 设在一个带表头结点的单链表中所有元素结点的数据值无序,试编写一个函数
// 删除表中所有介于给定的两个值(作为函数参数给出)之间的元素的元素(若存在)
// 时间复杂度O(n) 空间复杂度O(1)
void DeleteFromTo(LinkList &L, ElemType s, ElemType t) {
	Node *p = L->next;
	Node *pre = L;
	while (p != NULL) {
		if (p->data > s && p->data < t) {
			pre->next->next = pre->next;
			// pre->next = p->next;
			free(p);
			p = pre;
		}
		p = p->next;
		pre = pre->next;
	}
}