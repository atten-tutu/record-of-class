int main()
{
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum -= 1.0 / i;
		else
			sum += 1.0 / i;
	}
	printf("%lf\n", sum);
	return 0;
}
