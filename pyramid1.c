#include<stdio.h>
int main()
{
    int a,x=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=(a-i-2);j++)
        {
            printf(" ");
        }
        while(x!=(i*2+1))
        {
            printf("*");
            x++;
        }
        x=0;
        printf("\n");
    }
    return 0;
}