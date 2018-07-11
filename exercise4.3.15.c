// 设有一棵满二叉树(所有结点值均不同),已知其先序序列为pre,设计一个算法求其后续序列post
// l1,h1表示pre的第一个元素和最后一个元素
void PreToPost(ElemType pre[], int l1, int h1, ElemType &post[], int l2, int h2) {
	int half;
	if (l1 <= h1) {
		post[h2] = pre[l1];
		half = (h1 - l1) / 2;
		PreToPost(pre, l1 + 1, l1 + half, &post, l2, l2 + half - 1);
		PreToPost(pre, l1 + half + 1, h1, &post, l2 + half, h2 - 1);
	}
}