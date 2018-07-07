// 假定采用带头结点的单链表保存单词,当两个单词有相同的后缀时,则可共享相同的后缀
// 存储空间,设str1和str2分别指向两个单词所在单链表的头结点,链表结点结构为data
// ,link.请设计一个时间上尽可能高效的算法,找出由str1和str2所指向两个链表共同
// 后缀的起始位置.
// 时间复杂度O(max(len1, len2)) 空间复杂度O(1)
typedef struct {
	char data;
	struct Node *next;
}Node;
/* 求列表长度的函数 */
int ListLen(Node *head) {
	int len = 0;
	while(head->next != NULL) {
		len++;
		head = head->next;
	}
	return len;
}
/* 找出共同结点的起始位置 */
Node* FindAdd(Node *str1, Node *str2) {
	int len1 = ListLen(str1);
	int len2 = ListLen(str2);
	Node *p = str1; *q = str2;
	int i;
	// if (len1 > len2) {
	// 	i = len1 - len2;
	// 	while (i > 0) {
	// 		p = p->next;
	// 		i--;
	// 	}
	// } else {
	// 	i = len2 - len1;
	// 	while (i > 0) {
	// 		q = q->next;
	// 		i--;
	// 	}
	// }
	// 也可以用
	for (;len1 > len2; len1--) p = p->next;
	for (;len2 > len1; len2--) q = q->next;
	while (p->next != NULL && p->next != q->next) {
		p = p->next;
		q = q->next;
	}
	return p->next;

}