#include <stdio.h>

int main() 
{
    int a ,sum=0;
    printf("Input number : ");
    scanf("%d",&a);
    for(int i = 0; i < a ; i++)
    {
        sum+=i;
    }
    printf("givecard = %d",sum*2);
    return 0;
}