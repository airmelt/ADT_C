// 双链表的删除操作
// 把p->next赋值给p->prior的后继
p->prior->next = p->next;
// 把p->prior赋值给p->next的前驱
p->next->prior = p->prior;
// 释放结点
free(p);
