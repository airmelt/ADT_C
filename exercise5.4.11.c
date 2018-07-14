// 保存表中的链路状态信息LSI
// Link的结构
typedef struct {
	unsigned int ID, IP;
}LinkNode;
// Net的结构
typedef struct {
	unsigned int Prefix, Mask;
}NetNode;
// Flag = 1为iLink, Flag = 2为Net
typedef struct Node{
	int Flag;
union {
	LinkNode LNode;
	NetNode Nnode;
}LinkORNet;
unsigned int Metric; 
struct hNode *next
// 弧结点
}ArcNode;
// 表头结点
typedef struct hNode{
	unsigned int RouterID;
	ArcNode *LN_link;
	struct hNode *next
}hNode;