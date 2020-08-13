#include<stdio.h>

int main()
{
    int i = 0;
    int x = 0;
    while (i < 100)
    {
        scanf_s("%d", &x);
        i = x + i;
    }
    printf("%d", i);
}