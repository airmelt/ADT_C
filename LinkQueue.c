// 链式存储类型
// 链式队列结点
typedef struct {
	ElemType data;
	struct LinkNode *next;
} LinkNode;
// 链式队列
typedef struct {
	// 队头和队尾指针
	LinkNode *front, *rear;
} LinkQueue;
// 初始化
void InitQueue(LinkQueue &Q) {
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}
// 判队空
bool isEmpty(LinkNode Q) {
	if (Q.front == Q.rear) return true;
	else return false;
}
// 入队
void EnQueue(LinkQueue &Q, ElemType x) {
	s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}
// 出队
bool DeQueue(LinkQueue &Q, ElemType &x) {
	if (Q.front == Q.rear) return false;
	LinkNode p = Q.front->next;
	x = p->data;
	Q.front->next = p->next;
	// 若原队列只有一个结点,删除后变空
	if (Q.rear == p) Q.rear = Q.front;
	free(p);
	return true;
}