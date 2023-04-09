#include<stdio.h>
int m(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;

}
int main()
{
	int i=0;
	scanf_s("%d\n", &i);
	if ( m(i) == 1)
		printf("%d是闰年\n", i);
	else
		printf("%d不是闰年\n", i);
	return 0;
}
