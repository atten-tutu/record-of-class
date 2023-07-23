//返回较大值
//int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 9;
	int b = 8;
	int max = get_max(a,b);
	printf("%d\n", max);
	return 0;
}
