// 编写一个算法,在基于单链表表示的待排序关键字序列上进行简单选择排序
// 时间复杂度O(n^2) 空间复杂度O(1)
void selectSort(LinkedList &L) {
	LinkNode *h = L, *p, *q, *r, *s;
	L = NULL;
	while (h != NULL) {
		p = s = h;
		q = r = NULL;
		while (p != NULL) {
			if (p->data > s->data) {
				s = p;
				r = q;
			}
			q = p;
			p = p->link;
		}
		if (s == h) h = h->link;
		else r->link = s->link;
		s->link = L;
		L = s;
	}
}