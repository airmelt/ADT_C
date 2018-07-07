// 给定两个单链表,编写算法找出两个链表的公共结点
// 时间复杂度O(m + n) 空间复杂度O(max(m, n))
LinkList Common(LinkList L1, LinkList L2) {
	if (L1 == NULL || L2 == NULL) return NULL;
	LinkList p = L1;
	LinkList q = L2;
	// L1和L2首尾相连,得到的相等点即为公共结点
	while (p != q) {
		if (p == NULL) p = L2;
		else p = p->next;
		if (q == NULL) q = L1;
		else q = q->next;
	}
	return p;
}
// 解法2
// 长链表先遍历长度差的绝对值个结点,再同步遍历
// 时间复杂度O(len1 + len2) 空间复杂度O(1)
LinkList Common(LinkList L1, LinkList L2) {
	int len1 = Length(L1), len2 = Length(L2);
	LinkList longList, shortList;
	if (len1 > len2) {
		longList = L1->next;
		shortList = L2->next;
		dist = len1 - len2;
	} else {
		longList = L2->next;
		shortList = L1->next;
		dist = len2 - len1;
	}
	while (dist--) longList = longList->next;
	while (longList != NULL) {
		if (longList == shortList) return longList;
		else {
			longList = longList->next;
			shortList = shortList->next;
		}
	}
	return NULL;
}