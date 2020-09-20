#include<stdio.h>
int swap(int*, int*);
int main() {
	int x, y;
	scanf_s("%d %d", &x, &y);
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
int swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return *a, *b;
}