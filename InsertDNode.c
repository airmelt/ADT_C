// 使用单链表的查询
GetElem();
// 把p赋值给s的前驱
s->prior = p;
// 把p->next赋值给s的后继
s->next = p->next;
// 把s赋值给p->next的前驱
p->next->prior = s;
// 把s赋值给p的后继
p->next = s;