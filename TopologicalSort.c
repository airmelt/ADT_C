// 拓扑排序
bool TopoligicalSort(Graph G) {
	// 用队列和栈实现都可以
	InitStack(S);
	for (int i = 0; i < G.vexnum; i++) {
		if (indegree[i] == 0) Push(S, i);
	}
	int count = 0;
	while (!StackEmpty(S)) {
		Pop(S, i);
		print[count++] = i;
		for (p = G.vertices[i].firstarc; p; p = p->nextarc) {
			v = p->adjvex;
			if (!(--indegree[v]))
				Push(S, v);
		}
	}
	if (count < G.vexnum) return false;
	return true;
}