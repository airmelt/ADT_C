// 假设二叉树采用二叉链存储结构存储,设计一个算法,求先序遍历序列中第k(1<=k<=n)
// 个结点的值
// 设立一个全局变量
int i = 1;
ElemType FindK(BiTree T, int k) {
	if (T == NULL) return '#';
	if (i == k) return T->data;
	i++;
	BiTree p;
	p = FindK(T->lchild, k);
	if (p != '#') return p;
	p = FindK(T->rchild, k);
	if (p != '#') return p;
}