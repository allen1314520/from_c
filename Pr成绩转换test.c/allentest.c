#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    if (a < 0)
        printf("%s", "F");
    else
    {
        if (a < 60)
            printf("%s", "E");
    }
    if (a >= 60)
    {
        b = a / 10;
        switch (b)
        {
        case 6:printf("%s", "D"); break;
        case 7:printf("%s", "C"); break;
        case 8:printf("%s", "B"); break;
        case 9:printf("%s", "A"); break;
        case 10:printf("%s", "A"); break;
        default:printf("%s", "F"); break;
        }
    }
    return 0;
}