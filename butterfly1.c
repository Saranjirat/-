#include <stdio.h>
int main()
{

    int x;
    printf("Enter the number :");
    scanf("%d", &x);
    for (int i = 0; i <= x - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" * ");
        }

        for (int j = 0; j < (x * 2) - 1 - (i * 2); j++)
        {
            printf("   ");
        }

        for (int j = 0; j < i; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    //ตรงกลาง
    for (int k = 0; k < (x * 2) - 1; k++)
    {
        printf(" * ");
    }
    printf("\n");
    //ด้านล่าง
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = i; j < x - 1; j++)
        {
            printf(" * ");
        }
        for (int j = 0; j < (i+1)*2-1; j++)
        {
            printf("   ");
        }

        for (int j = i; j < x - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}