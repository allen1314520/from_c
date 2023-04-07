#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑即将在一分钟后关机，取消输入：我是猪.\n请输入》");
		scanf_s("%s", input);
		if (0 == strcmp(input, "我是猪"));
		{ system("shutdown -a");
	     break;
		}
	}
	return 0;
	system("pause");
}