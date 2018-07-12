// 已知一棵树的层次序列以及每个结点的度,编写一个算法构造此树的孩子-兄弟链表
#define maxNodes 100
void createCSTree_Degree(CSTree &T, DataType e[], int degree[], int n) {
	// 根据树结点的层次序列e[]和各结点的度degree[]构造树的孩子-兄弟链表
	// 参数n是结点个数
	CSNode *pointer = new CSNode[maxNodes];
	int i, j, d, k = 0;
	for (i = 0; i < n; i++) {
		pointer[i] = new CSNode;
		pointer[i]->data = e[i];
		pointer[i]->lchild = pointer[i]->rsibling = NULL;
	}
	for (i = 0; i < n; i++) {
		d = degree[i];
		if (d) {
			k++;
			pointer[i]->lchild = pointer[k];
			for (j = 2; j <= d; j++) 
				pointer[j - 1]->rsibling = pointer[j];
		}
	}
	T = pointer[0];
	delete [] pointer;
}