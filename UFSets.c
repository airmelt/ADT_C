// 树的并查集
#define SIZE 100
int UFSets[SIZE];
// 初始化
void Initial(int S[]) {
	for (int i = 0; i < size; i++) S[i] = -1;
}
// Find操作(函数在并查集S中查找并返回包含元素x的树的根)
int Find(int S[], int x) {
	while (S[x] >= 0) x = S[x];
	return x;
}
// Union操作(函数求两个不相交子集合的并集)
void Union(int S[], int Root1, int Root2) {
	S[Root2] = Root1;
}