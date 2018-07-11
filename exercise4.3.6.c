// 设一棵二叉树中各结点的值互不相同,其先序遍历序列和中序遍历序列分别存于两个
// 一维数组A[1...n]和B[1...n]中,试编写算法建立该二叉树的二叉链表
// 时间复杂度O(n) 空间复杂度O(n)
BiTree PreInCreate(ElemType A[], ElemType B[], int l1, int l2, int h1, int h2) {
	// l1,h1为先序序列数组第一个和最后一个元素下标
	// l2,h2为中序序列数组第一个和最后一个元素下标
	// 初始值l1 = l2 = 0, h1 = h2 = n
	// 初始化根结点
	root = (BiTNode*)malloc(sizeof(BiTNode));
	root->data = A[l1];
	int i;
	for (i = l2; B[i] != root->data; i++);
	int llen = i - l2;
	int rlen = h2 - i;
	// 递归建立左子树
	if (llen) root->lchild = PreInCreate(A, B, l1 + 1, l2, l1 + llen, l2 + llen - 1);
	else root->lchild = NULL;
	// 递归建立右子树
	if (rlen) root->rchild = PreInCreate(A, B, h1 - rlen + 1, h2 - rlen + 1, h1, h2);
	else root->rchild = NULL;
}