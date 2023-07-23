void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d", num);
	Add(&num);
	printf("%d", num);
	return 0;
}
