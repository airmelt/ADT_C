// 图的临界多重表存储结构
#define MaxVertexNum 100
// 边表结点
typedef struct ArcNode{
	// 访问标记
	bool mark;
	// 分别指向该弧的两个结点
	int ivex, jvex;
	// 分别指向两个顶点的下一条边
	struct ArcNode *ilink, *jlink;
	// InfoType info;
}ArcNode;
// 顶点表结点
typedef struct VNode{
	VertexType data;
	// 指向第一条依附该顶点的边
	ArcNode *firstedge;
}VNode;
// 邻接表
typedef struct {
	VNode adjmulist[MaxVertexNum];
	int vexnum, arcnum;
} AMLGraph;