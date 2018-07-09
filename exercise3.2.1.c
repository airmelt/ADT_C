// 如果希望循环队列中的元素都能得到利用,则需设置一个标志域tag,并以tag的值为0
// 或1来区分队头指针front和队尾指针rear相同时的队列状态是"空"还是"满".试编写
// 与此结构相应的入队和出队算法
// 队空条件:Q.front == Q.rear && Q.tag = 0;
// 队满条件:Q.front == Q.rear && Q.tag = 1;
// 入队tag置1,出队tag置0
bool EnQueue(SqQueue &Q, ElemType x) {
	if (Q.front == Q.rear && Q.tag = 1) {
		return false;
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % Maxsize;
	Q.tag = 1;
	return true;
}
bool DeQueue(SqQueue &Q, ElemType &x) {
	if (Q.front == Q.rear && Q.tag = 0) {
		return false;
	}
	Q.data[Q.front] = x;
	Q.front = (Q.front + 1) % Maxsize;
	Q.tag = 0;
	return true;
}