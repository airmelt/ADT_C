// 线性表中各结点的检索概率不等,则可用如下策略提高顺序检索的效率:若找到指定的
// 结点,将该结点和其前驱结点(若存在)交换,使得经常被检索的结点尽量位于表的前端.
// 试设计在顺序结构和链式结构的线性表上实现上述策略的顺序检索算法
int SeqSrch(RcdType R[], ElemType k) {
	int i = 0;
	while ((R[i].key != k) && (i < n)) i++;
	if (i < n && i > 0) {
		temp = R[i];
		R[i] = R[i - 1];
		R[i - 1] = temp;
		return --i;
	} else return -1;
}

Node LinkSrch(LinkedList R, ElemType k) {
	Node i = R;
	R = R->next;
	while ((R->data != k && R != NULL)) {
		R = R->next;
		i = i->next;
	if (R != NULL) {
		R->next = i->next;
		i = R;
		return i;
	} 
	return NULL;
}