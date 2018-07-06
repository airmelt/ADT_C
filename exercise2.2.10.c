// 将R中数据循环左移p个位置
void Reverse(int R[], int left, int right) {
	int mid = (left + right) / 2;
	for (int i = 0; i <= mid -left; i++) {
		R[left + i] = R[left + i] ^ R[right - i];
		R[right - i] = R[left + i] ^ R[right - i];
		R[left + i] = R[left + i] ^ R[right - i];
	}
}

void Exchange(int R[], int n, int p) {
	Reverse(R, 0, p - 1);
	Reverse(R, p, n - 1);
	Reverse(R, 0, n - 1);
}