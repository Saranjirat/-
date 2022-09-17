#include <stdio.h>

int main()
{
    float s[10];
    float x = 0;
    for (int i = 1; i < 11; i++)
    {
        printf("Student %d = ", i);
        scanf("%f", &s[i]);
        x = x + s[i];
    }
    printf("Average Height is %0.2f\n", x/10);
    return 0;
}