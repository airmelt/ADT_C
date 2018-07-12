// 编程求以孩子兄弟表示法存储的森林的叶子结点数
typedef struct CSNode{
	ElemType data;
	struct CSNode *firstchild, *nextsibling;
}CSNode *CSTree;
int LeavesNode(CSTree T) {
	if (T == NULL) return 0;
	if (T->firstchild == NULL)
		return 1 + LeavesNode(T->nextsibling);
	else return LeavesNode(T->firstchild) + LeavesNode(T->nextsibling);
}