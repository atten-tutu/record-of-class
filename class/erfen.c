int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >sqrt(i))
		{
			printf("%d\n", i);
			count++;
		}
		   

			
	}
	printf("%d\n", count);
		
	return 0;
}
