// 给定一个带表头结点的单链表,设head为头指针,结点的结构为(data, next)
// data为整型元素,next为指针,试写出算法:按递增次序输出单链表中各结点的
// 数据元素,并释放结点所占的存储空间(要求:不允许使用数组作为辅助空间)
// 时间复杂度O(n^2) 空间复杂度O(1)
void SortFree(LinkList &head) {
	// p为工作指针,pre记录最小值的前驱,min用来记录最小值
	Node *pre, *min, *p;
	while (head->next != NULL) {
		pre = head;
		p = pre->next;
		min = p;
		while (p->next != NULL) {
			if (p->next->data < pre->next->data) {
				pre = p;
			p = p->next;
		}
		min = pre->next;
		pre->next = pre->next->next;
		print(min);
		free(min);
	}
	free(head);
}