#include<stdio.h>
int guide(int j)
{
	int n;
	for (n = 2; n < j/2;n++)
	{
		if (j % n == 0)
			return 0;
	}
	return 1;


}
int main()
{
	int i = 0;
	scanf_s("%d", &i);
	if (guide(i) == 1)
	{
		printf("%d是素数\n", i);

	}
	else
		printf("%d不是素数\n",i);
}