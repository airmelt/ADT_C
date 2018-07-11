// 二叉树的带权路径长度(WPL)是二叉树中所有叶结点的带权路径长度之和.给定一根二叉树
// T,采用二叉链表存储,结点结构为left\weight\right,其中叶结点的weight域保存
// 该结点的非负权值.设root为指向T的根结点的指针,试设计求T的WPL的算法
typedef struct BiTNode{
	struct BiTNode *left, *right;
	int weight; 
}BiTNode *BiTree;

int WPL(BiTree root) {
	return PreOrder(root, 0, result);
}

void PreOrder(BiTree root, int deep) {
	// 定义一个静态变量存储结果
	static int result = 0;
	// 如果当前结点为叶结点,累加结果
	if (root->left == NULL && root->right == NULL) 
		result += deep * root->weight;
	// 左子树不为空,遍历左子树
	if (root->left != NULL) PreOrder(root->left, deep + 1);
	// 右子树不为空,遍历右子树
	if (root->right != NULL) PreOrder(root->right, deep + 1);
	return result;
}