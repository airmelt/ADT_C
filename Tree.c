// 双亲表示法
#define MAX_TREE_SIZE 100
typedef struct {
	Elemtype data;
	int parent;
}PTNode;
typedef struct {
	PTNode nodes[MAX_TREE_SIZE];
	int n;
}PTree;
// 孩子兄弟表示法
typedef struct CSNode{
	Elemtype data;
	struct CSNode *firstchild, *nextsibling;
}CSNode *CSTree;