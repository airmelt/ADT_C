// 两个整数序列A = a1, a2, a3, ..., am和B = b1, b2, b3, ..., bn已经存入
// 两个单链表中,设计一个算法,判断序列B是否是序列A的连续子序列.
// 时间复杂度O(mn) 空间复杂度O(1)
// 可以考虑用KMP算法优化
bool isChild(LinkList A, LinkList B) {
	Node *p = A->next, *pre = A, *q = B;
	while (p != NULL && q != NULL) {
		if (p->data == q->data) {
			p = p->next;
			q = q->next;
		} else {
			pre = pre->next;
			p = pre->next;
			q = B;
		}
	}
	if (q == NULL) return true;
	return false;
}