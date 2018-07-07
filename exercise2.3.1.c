// 设计一个递归算法,删除不带头结点的单链表L中所有值为x的结点
// 时间复杂度O(n) 空间复杂度O(n) 需要调用一个栈深度为O(n)
void deleteX(LinkList &L, ElemType x) { // L为引用
	if (L == NULL) {	     // 递归出口
		return;
	}
	Node *p;				 // p指向待删除结点
	if (L->data == x) {
			p = L;
			L = L->next;
			free(p);
			deleteX(L, x);
	} else {
		deleteX(L->next, x);
	}
}