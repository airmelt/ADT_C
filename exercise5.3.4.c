// 分别采用基于深度优先遍历和广度优先遍历算法判别以邻接表方式存储的有向图中是否
// 存在由顶点vi到顶点vj的路径(i <> j).注意,算法中设计的图的基本操作必须在此
// 存储结构上实现
int visited[MAXSIZE] = {0};
int DFS(ALGraph G, int i, int j) {
	int p;
	if (i == j) return 1;
	else {
		visited[i] = 1;
		for (p = FirstNeighbor(G, i); p >= 0; p = nextNeighbor(G, i, p)) {
			if (!visited[p] && DFS(G, p, j)) return 1;
		}
	}
	return 0;
}
int BFS(ALGraph G, int i, int j) {
	InitQueue(Q);
	EnQueue(Q, i);
	int u;
	int p;
	while (!QueueEmpty(Q)) {
		DeQueue(Q, u);
		visited[u] = 1;
		for (p = FirstNeighbor(G, i); p >= 0; p = nextNeighbor(G, i, p)) {
			k = p.adjvex;
			if (k == j) return 1;
			if (!visited[k]) EnQueue(Q, k);
		}
	}
	return 0;
}