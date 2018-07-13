// 写出图的深度优先搜索DFS的非递归算法(图采用邻接表形式)
void DFSNotRecursion(AGraph &G, int v) {
	int w;
	int k;
	InitStack(S);
	for (int i = 0; i < G.vexnum; i++) visited[i] = 0;
	Push(S, v);
	visited[v] = TRUE;
	while (!StackEmpty(S)) {
		Pop(S, k);
		visit(k);
		for (w = FirstNode(G, k); w >= 0; w = NextNeighbor(G, k, w)) {
			if (!visited[w]) {
				Push(S, w);
				visited[w] = TRUE;
			}
		}
	}
}