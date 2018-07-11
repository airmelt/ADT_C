// 设计一个算法将二叉树的叶结点按从左到右的顺序连成一个单链表,表头指针为head
// 二叉树按二叉链表方式存储,链接时用叶结点的右指针域来存放单链表指针
LinkedList head, pre = NULL;
LinkedList InOrderLeafNode(BiTree T) {
	if (T != NULL) {
		InOrderLeafNode(T->lchild);
		if (T->lchild == NULL && T->rchild == NULL) {
			if (pre == NULL) {
				head = T;
				pre = T;
			} else {
				pre->rchild = T;
				pre = T;
			}
		}
		InOrderLeafNode(T->rchild);
		pre->rchild = NULL;
	}
	return head;
}