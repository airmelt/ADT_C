// Dijkstra算法生成树
bool closed[N] = {false};
int Min[N] = {INF};
closed[start] = true;
Min[start] = 0;
for (int i = 1; i < N; i++) {
	int k = -1;
	for (int j = 0; j < N; j++) {
		if (!closed[j] && (k == -1 || Min[k] > Min[j])) k = j;
	}
	closed[k] = true;
	for (int j = 0; j < N; j++) {
		// Dijkstra
		if (Min[j] > Min[k] + G[k][j]) Min[j] = Min[k] + G[k][j];
		// Prim
		// if (Min[j] > G[k][j]) Min[j] = G[k][j];
	}
}