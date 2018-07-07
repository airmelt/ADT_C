// 已知两个链表A和B分别表示两个集合,其元素递增排列,编制函数,求A与B的交集
// 并存放于A链表中
// 时间复杂度O(m + n) 空间复杂度O(1)
void Union(LinkList &A, LinkList &B) {
	Node *pa = A->next; *pb = B->next, *p = A, *s;
	while (pa != NULL && pb != NULL) {
		if (pa->data == pb->data) {
			p->next = pa;
			p = pa;
			pa = pa->next;
			s = pb;
			pb = pb->next;
			free(s);
		} else if (pa->data < pb->data) {
			s = pa;
			pa = pa->next;
			free(s);
		} else {
			s = pb;
			pb = pb->next;
			free(s);
		}
	}
	while (pa != NULL) {
		s = pa;
		pa = pa->next;
		free(s); 
	}
	while (pb != NULL) {
		s = pb;
		pb = pb->next;
		free(s); 
	}
	p->next = NULL;
	free(B);
}