// 试设计判断两棵二叉树是否相似的算法.所谓二叉树T1和T2相似,指的是T1和T2都是空的
// 二叉树或都只有一个根结点;或T1的左子树和T2的右子树是相似的且T1的右子树和T2
// 的右子树是相似的
bool IsSimilar(BiTree T1, BiTree T2) {
	if (T1 == NULL && T2 == NULL) return true;
	if (T1 == NULL || T2 == NULL) return false;
	return IsSimilar(T1->lchild, T2->lchild) && IsSimilar(T1->rchild, T2->rchild);
}