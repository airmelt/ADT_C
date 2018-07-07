// 设有一个带头结点的循环单链表,其结点值均为正整数.设计一个算法,反复找出表中
// 结点值最小的结点并输出,然后将该结点从中删除,直到单链表空为止,再删除表头结点
// 时间复杂度O(n^2) 空间复杂度O(1)
void DeleteMin(LinkList &L) {
	Node *p, *pre, *minp, *minpre;
	while (L->next != L) {
		p = L->next;
		pre = L;
		minp = p;
		minpre = pre;
		while (p != L) {
			if (p->data < minp->data) {
				minp = p;
				minpre = pre;
			}
			pre = p;
			p = p->next;
		}
		printf("%d\n", minp->data);
		minpre->next = minp->next;
		free(minp);
	}
	free(L);
}