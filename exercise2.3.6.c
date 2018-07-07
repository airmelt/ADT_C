// 有一个带头结点的单链表L,设计一个算法使其元素递增有序
// 时间复杂度O(n^2) 空间复杂度O(1)
// 可以转化为数组用更快的排序 时间复杂度O(nlgn) 空间复杂度O(n)
void Sort(LinkList &L) {
	// r保持*p后继结点指针,以保证不断链
	Node *p = L->next, *pre, *r = p->next;
	// 构造只含一个数据结点的有序表
	p->next = NULL;
	p = r;
	while (p != NULL) {
		// 保存*p的后继指针
		r = p->next;
		pre = L
		while(pre->next != NULL && pre->next->data < p->data) {
			// 在有序表中查找插入*p的前驱结点*pre
			pre = pre->next;
		}
		// 将*p插入到*pre之后
		p->next = pre->next;
		pre->next = p;
		// 扫描原单链表中剩下的结点
		p = r;
	}
}