typedef struct {
	ElemType *elem;
	int TableLen;
}SSTable;
int Search_Seq(SSTable ST, ElemType key) {
	// 哨兵
	ST.elem[0] = key;
	for (int i = ST.TableLen; ST.elem[i] != key; --i) ;
		return i;
}