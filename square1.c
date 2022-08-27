#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number :");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < x - 2; i++)
    {
        printf("*");
        for (int j = 0; j < x - 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        printf("*");
    }
    return 0;
}
