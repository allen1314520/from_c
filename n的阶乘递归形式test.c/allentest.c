#include<stdio.h>
#include<assert.h>
int my_mean(int num)
{
	int j = 1;
	if(num>=1)
	{if (num == 1)
		return 1;
	else
		return my_mean(num - 1) * num;
	}
	else
	{
		 j = 0;
	}
	assert(j);
}
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int sum = 0;
	sum=my_mean(num);
	printf("%dµÄ½×³ËÊÇ%d", num, sum);
	return 0;
}