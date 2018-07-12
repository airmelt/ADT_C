// 试编写一个算法,判断给定的二叉树是否是二叉排序树
// 全局变量,用来记录当前结点中序遍历前驱的值
KeyType pre = -32767;
int IsBST(BiTree T) {
	if (T == NULL) return 1;
	int bl, br;
	bl = IsBST(T->lchild);
	if (b1 == 0 || pre >= T->data) return 0;
	pre = T->data;
	br = IsBST(T->rchild);
	return br; 
}