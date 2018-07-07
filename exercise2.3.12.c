// 再一个递增有序的线性表中,有数值相同的元素存在,若存储方式为单链表,设计算法
// 去掉数值相同的元素,使表中不再有重复的元素.
// 时间复杂度O(n) 空间复杂度O(1)
void DeleteSame(LinkList &L) {
	Node *p = L->next, *pre = L;
	while (p->next != NULL) {
		if (p->next->data == pre->next->data) {
			pre->next = p->next;
			free(p);
			p = pre->next;
		} else {
			p = p->next;
			pre = pre->next;
		}
	}
}