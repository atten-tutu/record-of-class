int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	if (left > right)
		return -1;
		
}
int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int find = 6;
	int sz = (sizeof(arr1) / sizeof(arr1[0])) - 1; 

	int ret = binary_search(arr1, 6,sz);
	if (ret == -1)
		printf("未找到指定的数字");
	else
		printf("找到了，下标是%d", ret);
	return 0;
}
