// 设计一个算法用于判断带头结点的循环双链表是否对称
// 时间复杂度O(n) 空间复杂度O(1)
bool isSymmetric(DLinkList L) {
	Node *p = L->next, *q = L->prior;
	while (p != q && p->next != q) {
		if (p->data != q->data) {
			return false;
		}
		p = p->next;
		q = q->prior;
	}
	return true;
}