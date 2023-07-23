交换两个数
void Swap(int* x, int* y)
{
	int rec = *x;
	*x = *y;
	*y = rec;
}
int main()
{
	int a = 5;
	int b = 8;
	printf("a = %d b = %d", a, b);
	Swap(&a, &b);
	printf("a = %d b = %d", a, b);
	return 0;
}
