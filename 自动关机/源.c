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
		printf("���Լ�����һ���Ӻ�ػ���ȡ�����룺������.\n�����롷");
		scanf_s("%s", input);
		if (0 == strcmp(input, "������"));
		{ system("shutdown -a");
	     break;
		}
	}
	return 0;
	system("pause");
}