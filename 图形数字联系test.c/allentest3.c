#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		for (i = 0; i < a; i++)
			printf("%s", "*");
			printf("\n");
		    
	}
	return 0;

}