// 某汽车轮渡口,过江渡船每次能载10辆车过江.过江车辆分为客车类和货车类,上渡船
// 有如下规定:同类车先到先上传;客车先于货车上渡船,且每上4辆客车,才允许放上一辆
// 货车;若等待客车不足4辆,则以货车代替;若无货车等待,允许客车都上船.试设计一个
// 算法模拟渡口管理
// 时间复杂度O(n) 空间复杂度O(n)
// Q为输出队列,Q1为客车队列,Q2为货车队列
void Manager(Queue &Q, Queue &Q1, Queue &Q2) {
	// j为渡船上的车辆数
	int i = 0, j = 0;
	// x表示待上渡船的车
	ElemType x;
	while (j < 10) {
		if (!QueueEmpty(Q1) && i < 4) {
			DeQueue(Q1, x);
			EnQueue(Q, x);
			i++;
			j++;
		} else if (i == 4 && !QueueEmpty(Q2)) {
			DeQueue(Q2, x);
			EnQueue(Q, x);
			j++;
			i = 0;
		} else {
			while (j < 10 && i < 4 && !QueueEmpty(Q2)) {
				DeQueue(Q2, x);
				EnQueue(Q, x);
				i++;
				j++;
			}
			i = 0;
		}
		if (QueueEmpty(Q1) && QueueEmpty(Q2)) break;
	}
}