//简化版好简单呜呜呜
//int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int rec = a;
		a = b;
		b = rec;
	}
	if (a < c)
	{
		int rec = a;
		a = c;
		c = rec;
	}
	if(b<c)
	{
		int rec = b;
		b = c;
		c = rec;
	}

	printf("%d %d %d", a, b, c);
	return 0;
}
 
