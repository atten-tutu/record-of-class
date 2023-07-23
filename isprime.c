判断素数
void isprime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			printf("不是");
			break;
		}
			
	}
	if (i > sqrt(x))
		printf("是");
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	isprime(a);
	return 0;
}
