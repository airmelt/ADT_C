// 将单链表的第i个结点删除
// 查找时间复杂度O(n) 删除时间复杂度O(1)
void DeleteNode(LinkList *L, int i, ElemType *e) {
	// 遍历寻找第i个元素
	int j;
	LinkList p, q;
	p = *L;
	j = 1;
	while (p->next && j < i) {
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i)
		return;
	// 将p的后继赋值给q
	q = p->next;
	// 将q的后继赋值给p的后继
	p->next = q->next;
	// 将q结点中的数据给e
	*e = q->data;
	// 让系统回收此结点,释放内存
	free(q);
}