#include<stdio.h>
int select(int i)
{   
	int x = 0;
	if (i <= 1)
		return 1;
	else
		return i * select(i - 1);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = 0;
	ret = select(n);
	printf("%d\n", ret);

}