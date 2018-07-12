// 以孩子兄弟链表为存储结构,请设计递归算法求树的深度
int Depth(CSTree T) {
	int dc = 0;
	int db = 0;
	if (T == NULL) return 0;
	else {
		dc = Depth(T->firstchild);
		db = Depth(T->nextsibling);
	}
	return (dc + 1 > db) ? dc + 1 : db;
}