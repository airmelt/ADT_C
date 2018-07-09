// 队列的顺序存储类型
// 定义队列中元素的最大个数
#define MaxSize 50
typedef struct {
	// 存放队列元素
	ElemType data[MaxSize];
	// 队头指针和队尾指针
	int front, rear;
} SqQueue;
// 循环队列
// 初始化
void InitQueue(&Q) {
	Q.rear = Q.front = 0;
}
// 判队空
bool isEmpty(Q) {
	if (Q.rear == Q.front) return true;
	else return false;
}
// 入队
bool EnQueue(SqQueue &Q, ElemType x) {
	if ((Q.rear + 1) % MaxSize == Q.front) return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}
// 出队
bool DeQueue(SqQueue &Q, ElemType &x) {
	if (Q.rear == Q.front) return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}