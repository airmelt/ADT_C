// 试说明利用DFS如何实现有向无环图拓扑排序
bool visited[MAX_VERTEX_NUM];
void DFSTraverse(Graph G) {
	for (v = 0; v < G.vexnum; ++v) visited[i] = FALSE;
	time = 0;
	for (v = 0; v < G.vexnum; ++v) DFS(G, v);
}
void DFS(Graph G, int v) {
	visited[v] = TRUE;
	visit(v);
	for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) {
		if (!visited[w]) DFS(G, w);
	}
	time++;
	finishTime[v] = time;
}