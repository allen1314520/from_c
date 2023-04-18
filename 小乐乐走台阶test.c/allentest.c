#include<stdio.h>
int my_best(int num)
{
	if (num == 1)
		return 1;
	if (num == 2)
		return 2;
	else
		return my_best(num - 1) + my_best(num - 2);

}
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	my_best(num);
	int ret = 0;
	ret = my_best(num);
	printf("%d", ret);
	return 0;
}