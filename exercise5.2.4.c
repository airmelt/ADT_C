// 写出从图的邻接表表示转换成邻接矩阵表示的算法
// 时间复杂度O(n^2) 空间复杂度O(n^2)
void Convert(ALGraph &G, int arcs[n][n]) {
	for (int i = 0; i < n; i++) {
		p = (G->v[i]).firstarc;
		while (p != NULL) {
			arcs[i][p->data] = 1;
			p = p->nextarc;
		}
	}
}