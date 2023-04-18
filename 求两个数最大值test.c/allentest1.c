#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	  if(a>b)
	printf("%d\n", a);
	    if(a<b)
	printf("%d\n", b);
		if (a == b)
			printf("%d=%d", a, b);

	return 0;
}