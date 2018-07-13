// 试设计一个算法,判断一个无向图G是否为一棵树.若是一棵树,则算法返回true,否则返回false
// 判定遍历n个结点的同时是否有n条边
bool isTree(Graph &G) {
	for (int i = 1; i <= G.vexnum; i++) visited[i] = FALSE;
	int Vnum = 0, Enum = 0;
	DFS(G, 1, Vnum, Enum, visited);
	if (Vnum == F.vexnum && Enum == 2 * (G.vexnum - 1)) return true;
	else return false;
}
void DFS(Graph &G, int v, int &Vnum, int &Enum, int visited[]) {
	visited[V] = true;
	Vnum++;
	int w = FirstNeighbor(G, v);
	while (w != -1) {
		Enum++;
		if (!visited[w]) DFS(G, w, Vnum, Enum, visited);
		w = NextNeighbor(G, v, w);
	}
}