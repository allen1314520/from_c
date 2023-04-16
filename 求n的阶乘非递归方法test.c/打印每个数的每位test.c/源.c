#include<stdio.h>
void print(int n)
{
	if (n > 9)
		print(n / 10);
	
		printf("%d\n", n % 10);

}
int main()
{
	int i = 0;
	int ret = 0;
	scanf_s("%d", &i);
    print(i);
}