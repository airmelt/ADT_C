// 设一棵二叉树的结点结构为(LLINK, INFO, RLINK), ROOT为指向该二叉树根结点的
// 指针,p和q分别为指向该二叉树中任意两个结点的指针,试编写算法
// ANCESTOR(ROOT, p, q, r),该算法找到p和q的最近公共祖先结点r
// 后序遍历,设p在q的左边
// 时间复杂度O(n) 空间复杂度O(n)
typedef struct {
	BiTree t;
	int tag;
}stack;
BiTree Ancestor(BiTree ROOT, BiTNode *p, BiTNode *q) {
	stack s1[Maxsize], s2[Maxsize];
	int top1 = 0, top2;
	while (ROOT != NULL || top > 0) {
		while (ROOT != NULL && ROOT != p && ROOT != q) {
			while (ROOT != NULL) {
				s1[++top].t = ROOT;
				s1[top].tag = 0;
				ROOT = ROOT->LLINK;
			}
		}
		while (top != 0 && s[top].tag == 1) {
			if (s1[top].t == p) {
				for (int i = 1; i <= top; i++) {
					s2[i] = s1[i];
					top2 = top1;
				}
			}
			if (s1[top].t == q) {
				for (int i = top1; i > 0; i--) {
					for (int j = top2; j > 0; j--) {
						if (s2[j].t == s1[i].t) return s1[i].t;
					}
				}
				top--;
			} 
		}
		if (top1 != 0) {
			s[top].tag = 1;
			ROOT = s1[top].t->rchild;
		}
	}
	// p在q的右边
	return Ancestor(ROOT, BiTNode *q, BiTNode *p);
}