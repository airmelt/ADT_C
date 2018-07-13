// 图的邻接表存储结构
#define MaxVertexNum 100
// 边表结点
typedef struct ArcNode{
	int adjvex;
	struct ArcNode *next;
	//InfoType info;
}ArcNode;
// 顶点表结点
typedef struct VNode{
	VertexType data;
	ArcNode *first;
}VNode, AdjList[MaxVertexNum];
// 邻接表
typedef struct {
	AdjList vertices;
	int vexnum, arcnum;
} ALGraph;