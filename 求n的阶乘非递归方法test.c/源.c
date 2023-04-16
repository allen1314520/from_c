#include<stdio.h>
int select(int i)
{
	int x = 1;
	for (i; i > 1; i--)
		x = i * x;
	return x;
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = 0;
	ret = select(n);
	printf("%d\n", ret);
	return 0;
}