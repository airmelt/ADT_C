// 图的邻接矩阵存储结构
#define MaxVertexNum 100
// 顶点数据类型
typedef char VertexType;
// 带权图中边上权值的数据类型
typedef int EdgeType;
typedef struct {
	VertexType Vex[MaxVertexNum];
	EdgeType Edge[MaxVertexNum][MaxVertexNum];
	int vexnum, arcnum;
}MGraph;