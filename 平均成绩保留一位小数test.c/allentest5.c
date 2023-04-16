#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int sum = 0;
    sum = a + b + c + d + e;
    float num = 0;
    num = sum / 5.0;
    printf("%.1f", num);
}