void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
