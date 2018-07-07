// 已知一个带有表头结点的单链表,结点结构为data,link.假设该链表只给出了头指针
// list.在不改变链表的前提下,请设计一个尽可能高效的算法.查找链表中倒数第k个
// 位置上的结点(k为正整数).若查找成功,算法输出该结点的data域的值,并返回1.
// 否则,只返回0.
// 需要写出具体的LNode定义
// 时间复杂度O(n) 空间复杂度O(1)
typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode *link;
}LNode *LinkList;
int Search(LinkList list, int k) {
	Node *p = list->link, *q = list->link;
	int i = 1;
	// while (i < k && p != NULL) {
	// 	p = p->link;
	// 	i++;
	// }
	// if (p == NULL) {
	// 	return 0
	// }
	// while (p != NULL) {
	// 	p = p->link;
	// 	q = q->link;
	// }
	// printf("%d\n", q->data);
	// return 1;
	// 优解
	while (p != NULL) {
		if (i < k) count++;
		else q = q->link;
		p = p->link;
	}
	if (count < k) return 0;
	else {
		printf("%d\n", q->data);
		return 1;
	}
}