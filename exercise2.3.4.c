// 试编写在带头结点的单链表L中删除一个最小值结点的高效算法
// 时间复杂度O(n) 空间复杂度O(1)
void DeleteMin(LinkList &L) {
	// p为工作指针 pre为其前驱
	Node *pre = L, *p = pre->next;
	// min为最小指针,初始为第一个元素,minPre为min的前驱
	Node *min = p, *minPre = pre;
	while (p != NULL) {
		if (p->data < min->data) {
			minPre = pre
			min = p;
		}
		pre = p;
		p = p->next;
	}
	minPre->next = min->next;
	free(min);
}