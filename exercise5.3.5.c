// 假设图用邻接表表示,设计一个算法,输出从顶点Vi到顶点Vj的所有简单路径
void FindPath(AGraph *G, int i, int j, int path[], int d) {
	int w,u;
	ArcNode *p;
	d++;
	path[d] = i;
	visited[i] = 1;
	if (i == j) print(path[]);
	p = G->adjlist[u].firstarc;
	while (p != NULL) {
		w = p->adjvex;
		if (visited[w] == 0) FindPath(G, w, j, path, d);
		p = p->nextarc;
	}
	visited[u] = 0;
}