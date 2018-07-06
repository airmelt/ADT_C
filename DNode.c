// 线性表的双链表存储结构
typedef struct DNode
{
	ElemType data;
	// 直接前驱指针
	struct DNode *prior;
	// 直接后继指针
	struct DNode *next;
} DNode, DLinkList;