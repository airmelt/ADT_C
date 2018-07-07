// 设头指针为L的带有表头结点的非循环双向链表,其每个结点中除有pred(前驱指针).
// data(数据)和next(后继指针)域外,还有一个访问频度域freq.在链表被启用前,其
// 值均初始化为0.每当在链表中进行一次Locate(L, x)运算时,令元素值为x的结点中
// freq域的值增1,并使此链表中结点保持按访问频度非增(递减)的顺序排列,同时最近
// 访问的结点排在频度相同的结点的前面,以便使频繁访问的结点总是靠近表头,试编写
// 符合上述要求的Locate(L, x)运算的算法,该运算为函数过程,返回找到的结点的地址
// 类型为指针型
DLinkList Locate(DLinkList &L, ElemType x) {
	DNode *p = L->next, *pre;
	while (p != NULL && p->data != x) {
		p = p->next;
	}
	if (p == NULL) {
		print("不存在值为x的结点");
		exit(0);
	} else {
		pre = p->pred;
		p->next->pred = p->pred;
		p->pred->next = p->next;
		p->freq++;
		while (pre != L && pre->freq <= p->freq) {
			pre = pre->pred;
		}
	p->next = pre->next;
	pre->next->pred = p;
	p->pred = pre;
	pre->next = p->next;
	return p;                    
	}
}