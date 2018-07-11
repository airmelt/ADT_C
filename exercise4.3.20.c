// 请设计一个算法,将给定的表达式树(二叉树)转换为等价的中缀表达式(通过括号反映
// 操作符的计算次序)并输出.输出等价中缀表达式.
// 中序遍历,加上必要的括号
// 叶结点全为操作数,其余结点为操作符
// 根结点不加()
// 每层子树加一层()
// 左子树加"(" 右子树加")"
void BTreeToExpress(BTree T) {
	// 根的高度设为0
	InOrder(T, 0);
}
// 中序遍历
void InOrder(BTree T, int deep) {
	// 空结点返回
	if (T == NULL) return;
	// 若为叶结点,直接输出操作数,不用加括号
	else if (T->left == NULL && T->right == NULL) printf("%s", T->data);
	else {
		// 如果有左子树,加左括号
		if (deep > 0) printf("(");
		// 遍历左子树		
		InOrder(T->left, deep + 1);
		// 处理根结点操作符
		printf("%s", T.data);
		// 遍历右子树
		InOrder(T->right, deep + 1);
		// 如果有右子树,加右括号
		if (deep > 0) printf(")");
	}
}