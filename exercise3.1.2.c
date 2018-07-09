// 设单链表的表头指针为L,结点结构由data和next两个域构成,其中data域为字符型,
// 试设计算法判断该链表的全部n个字符是否中心对称.例如xyx和xyyx都是中心对称.
// 时间复杂度O(n) 空间复杂度O(1)
bool Symmetric(LinkList L, int n) {
	int i;
	char s[n / 2];
	LNode p = L->next;
	for (i = 0; i < n / 2; i++) {
		s[i] = p->data;
		p = p->next;
	}
	i--;
	if (n % 2 == 1) {
		p = p->next;
	}
	while (p != NULL && s[i] == p->data) {
		p = p->next;
		i--;
	}
	if (i == -1) {
		return true;
	}
	return false;
}