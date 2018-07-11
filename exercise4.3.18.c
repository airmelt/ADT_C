// 写出在中序线索二叉树里查找指定结点在后序的前驱结点的算法
ThreadTree InPostPre(ThreadTree T, ThreadTree p) {
	ThreadTree result;
	if (p->rtag == 0) {
		result = p->rchild;
	} else if (p->ltag == 0) {
		result = p->lchild;
	} else if (p->lchild == NULL) {
		result = NULL;
	} else {
		while (p->ltag == 1 && p->lchild != NULL) {
			p = p->lchild;
			if (p->ltag == 0) {
				result = p->lchild;
			} else {
				result = NULL;
			}
		} 
	}
	return result;
}