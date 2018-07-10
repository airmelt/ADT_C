// 二叉树的链式存储结构
typedef struct BiTNode {
	ElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode *BiTree;