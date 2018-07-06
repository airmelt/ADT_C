// 单链表中节点类型
typedef struct Node
{
	ElemType data;
	struct Node *next;
} Node;
// 定义LinkList
typedef struct Node *LinkList;