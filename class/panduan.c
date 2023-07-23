闰年判断
int is_leap(int x)
{
	if ((x % 400 == 0) || (x % 4 == 0) && (x % 100 != 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (is_leap(year))
		printf("是闰年");
	else
		printf("不是");
	return 0;
}
