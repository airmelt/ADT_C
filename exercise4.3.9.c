// 设数B是一棵采用链式存储结构存储的二叉树,编写一个把树B中所有结点的左,右子树
// 进行交换的函数
void Mirror(BiTree &T) {
	if (!T) return;
	BiTree temp;
	temp = T->rchild;
	T->rchild = T-lchild;
	T->lchild = temp;
	Mirror(T->lchild);
	Mirror(T->rchild);
}