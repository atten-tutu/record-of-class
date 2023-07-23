int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int find = 5;
	int left = 0;
	int mid = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > find)
			right = mid - 1;
		else if (arr[mid] < find)
			left = mid + 1;
		else
		{
			printf("%d\n", mid);
			break;
		}
			
	}

	return 0;
}
