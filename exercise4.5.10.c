// 设计一个算法,从大到小输出二叉排序树中所有其值不小于k的关键字
// 后序遍历
void OutPutK(BSTNode *T, KeyType k) {
	if (T == NULL) return;
	if (T->rchild != NULL) OutPutK(T->rchild, k);
	if (T->data >= k) printf("%s\n", T->data);
	if (T->lchild != NULL) OutPutK(T->lchild, k);
}