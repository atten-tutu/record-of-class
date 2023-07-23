int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	while (a % b != 0)
	{
		int rec = b;
		b = a % b;
		a = rec;
	}
	printf("%d", b);
	return 0;
}
