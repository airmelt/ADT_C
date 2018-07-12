// 设计一个算法,求出指定结点在给定二叉排序树中的层次
// 时间复杂度O(logn) 空间复杂度O(1)
int Level(BiTree T, BSTNode *p) {
	int level = 0;
	BiTree t = T;
	if (t != NULL) {
		level++;
		while (p->data != t->data) {
			if (p->data > t->data) {
				t = t->rchild;
				level++;
			} else {
				t = t->lchild;
				level++;
			}
		}
	}
	return level;
}