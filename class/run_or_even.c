闰年表达式
int main()
{
	int vout = 0;
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
		{
			printf("%d\n", i);
			vout++;
		}
			
	}
	printf("%d\n", vout);
	return 0;
}
