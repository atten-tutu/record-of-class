#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int arr1[] = { 1 };
	return 0;
}
//int main()
//{
//	char realpass[] = "123456";
//	char passward[] = { 0 };
//	int i = 0;
//	printf("请输入密码，只有五次机会喵");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%s", passward);
//		if (strcmp(passward ,realpass) == 0)
//		{
//			printf("对啦");
//			break;
//		}
//		else
//			printf("不对，还有 %d 次机会", (3 - i));
//	}
//	if (i > 3)
//		printf("错了");
//	return 0;
//}
// 
//从中间汇聚
//int main()
//{
//	char arr1[] = "welcome to my home!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//
//}
// 
//二分法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//	
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//			
//		}
//
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//		printf("没有你要找的呀");
//	return 0;
//}
// 
////计算一的阶乘加到十的阶乘
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int jiecheng = 1;
//		for (j = 1; j <= i; j++)
//		{
//			jiecheng *= j;
//		}
//		sum += jiecheng;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
// 
//n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i += 1)
//	{
//		sum *= i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
// 
////int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//	/*		break;*/
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		printf("miO");
//		k++;
//	}
//	return 0;
//}
// 
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("hehe\n");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
// 
//int main()
//{
//	int ch = 0;
//	while (ch = getchar())
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char queren = 0;
//	char passward[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", passward);
//	printf("请确认");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	scanf("%c", &queren);
//	if (queren == 'Y')
//		printf("成功");
//	else
//		printf("失败");
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch= getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//		
//	return 0;
//}
//int main()
//{
//	char a = getchar();
//	putchar(a);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
////int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}
// 
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	}
//	return 0;
//}
// ()
//{
//	int a = 1;
//	while(a >= 1 && a <= 100)
//	{
//		if (a % 2 != 0)
//			printf("%d\n", a);
//		a++;
//	}
//		
//				
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 9;
//	if (a == 1)
//		if (b != 0)
//			printf("k\n");
//		else
//			printf("s\n");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age <= 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else {
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age > 28 && age < 50)
//			printf("壮年\n");
//		else if (age > 50 && age < 100)
//			printf("老年\n");
//		else
//			printf("活神仙\n");
//	}
//	/*if (age <= 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age > 28 && age < 50)
//		printf("壮年\n");
//	else if (age > 50 && age < 100)
//		printf("老年\n");
//	else
//		printf("活神仙\n");*/
//	/*if (age >= 18)
//		printf("已成年");
//	else
//		printf("未成年");*/
//	/*if (age >= 18)
//		printf("已成年");*/
//	return 0;
//}
////struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	/*printf("%s\n", b1.name);
//	printf("%d\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//	char a = 'a';
//	char* pc= &a;
//	printf("%d\n", sizeof(pc));
//	*pc = 'b';
//	printf("%c\n", a);
//	return  0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 6;
//	printf("%d\n", a);
//	return 0;
//}
//#define MAX(a,b) (a>b?a:b)
//int main()
//{
//	int a = 0;
//	int b = 9;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//#define max 100 
//int main()
//{
//	int a = max;
//	return 0;
//}
//extern int add(int a, int b);
//
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	extern val;
//	printf("%d\n", val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	int b = 2;
//	printf("%d\n", a || b);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.8;
//	printf("%d\n", a);
//	return 0;
// }
//int main()
//{
//	int a = 5;
//	int b = a++;
//	int b = ++a;
//	int b = a--;
//	int b = --a;
//	return 0;
//}
//int main()
//{
//	int b = 0;
//	int a = ~b;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int arr[] = { 1,2,3,4,6,7,7,8 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//int compare(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int max = 0;
//	int num1 = 2;
//	int num2 = 5;
//	max = compare(num1, num2);
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
 
//int main()
//{
//	int a = 10;
//	a -= 2;
//	a *= 3;
//	a &= 8;
//	return 0;
// }
//int main()
//{
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//}


//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}

//int main()
//{
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入喵喵教\n");
//	
//
//	while (line <= 2000)
//	{
//		printf("敲一行代码\n");
//		line++;
//	}
//	if (line >= 2000)
//		printf("好offer\n");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("你想好好学习吗\n");
//	scanf("%d", &input);
//	
//	if (input == 1)
//		printf("你真牛，收到offer\n");
//	else
//		printf("你完蛋啦\n");
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\text\3 2\text.c"));
//	printf("%c\n",'\132');
//	printf("%c\n", '\x61');
//	////return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}














//#include <stdio.h>
//int main()
//{
//	//char ch = 'a';
//	//float f = 5.0;
//	//printf("%c\n", ch);
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//printf("% lf\n", d);
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//
//}
#include <stdio.h>

//int global = 2345;
//
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	{
//		printf("%d\n", num);
//	}
//	return 0;
// }

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 
//int num2 = 20;
//
//int main()
//{
//	int num1 = 10;
//	return 0;
//}
// 
//int main()
//{
//	short age = 20;
//	float weight = 95.6f;
//	return 0;
//}

#include <stdio.h>

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECERT
//};
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECERT);
//
//	return 0;
//}

#define MAX 10

//int main()
//{
//	printf("%d\n", MAX);
//		return 0;
//}
