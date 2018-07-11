// 假设二叉树采用二叉链表存储结构存储,试设计一个算法,计算一棵给定二叉树的所有
// 双分支结点个数
// 或者层次遍历设置result,每遇到一个双结点result++
int TwoBranch(BiTree T) {
	if (!T) return 0;
	else if (T->lchild && T->rchild) 
		return TwoBranch(T->lchild) + TwoBranch(T->rchild) + 1;
	else return TwoBranch(T->lchild) + TwoBranch(T->rchild);
}