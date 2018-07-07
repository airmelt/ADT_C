// 用单链表保存m个整数,结点的结构为:[data][link],且|data|<=n(n为正整数).现要求
// 设计一个时间复杂度尽可能高效的算法,对于链表中data的绝对值相等的结点,仅保留
// 第一次出现的结点而删除其余绝对值相等的结点.
// 时间复杂度O(m) 空间复杂度O(n)
/* 单链表结点的数据类型定义 */
typedef struct LNode{
	int data;
	struct LNode *link;
}LNode, *LinkList;
void DeleteAbs(LinkList &L, int n) {
	// p为工作指针,pre为p的前驱
	LinkList *p = L->link, *pre = L;
	// 用来记录p的data绝对值
	int m;
	// 辅助数组,长度为n + 1
	int q[n + 1];
	// 给数组赋初值
	for (int i = 0; i < n + 1; i++) {
		q[i] = 0;
	}
	while (p->link != NULL) {
		m = p->data;
		if (m < 0) m = -m;
		// 判断结点的绝对值是否出现过
		// 首次出现
		if (q[m] == 0) {
			q[m] = 1;
			// p,pre后移
			p = p->link;
			pre = pre->link;
		// 重复出现
		} else {
			pre->next = p->next;
			// 删除结点
			free(p);
			p = pre->next;
		}
	}
	// 释放q辅助数组
	free(q);
}