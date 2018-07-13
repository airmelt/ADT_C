// 图的十字链表存储结构
#define MaxVertexNum 100
// 边表结点
typedef struct ArcNode{
	// 该弧的头尾结点
	int tailvex, headvex;
	// 分别指向弧头相同和弧尾相同的结点
	struct ArcNode *hlink, *tlink;
	// InfoType info
}ArcNode;
// 顶点表结点
typedef struct Vnode{
	VertexType data;
	// 指向第一条入弧和出弧
	ArcNode *firstin, *firstout;
}VNode;
// 邻接表
typedef struct {
	VNode xlist[MaxVertexNum];
	int vexnum, arcnum;
} GLGraph;
