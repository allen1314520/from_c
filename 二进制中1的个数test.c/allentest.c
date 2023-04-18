#include<stdio.h>
int main()
{
    int num = -1;
    int i = 0;
    int count = 0;
    scanf_s("%d", &num);
    /* for(i=0;i<32;i++)
     {
         if(num&(1<<i))
         count++;
     }*/
    while (num)
    {
        count++;
        num = num & (num - 1);
    }
    printf("%d", count);
    return 0;
}
/*#include<stdio.h>
int main()
{
    int a;
    scanf_s("%d", &a);
    int count = 0;
    while (a)
    {
        if (a % 2 == 1)
            count++;
        a = a / 2;
    }
    printf("二进制中1的个数=%d\n", count);
    return 0;
}*/