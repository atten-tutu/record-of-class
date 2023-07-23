猜数字游戏
菜单
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("猜数字");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了");
		else if (guess < ret)
			printf("猜小了");
		else
		{
			printf("猜对了");
			break;
		}

	}
}
void menu()
{
	printf("-------------------------------------\n");
	printf("-------------1.play  0.exit----------\n");
	printf("-------------------------------------\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} 
	while (input);
	return 0;
}
