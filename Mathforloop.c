#include <stdio.h>

int main()
{
    int a,b;
    int sum1,sum2,sum3;
    int s2=1,s3=1,s4=1,s5=1;
    scanf("%d %d",&a,&b);
    sum1=2*a+b;
    printf("c=2a+b = %d",sum1);
    for (int i = 0; i < 5; i++)
    {
        s5=a*s5;
    }
    for (int j = 0; j < 4; j++)
    {
        s4=a*s4;
    }
    for (int k = 0; k < 3; k++)
    {
        s3=a*s3;
    }
    for (int l = 0; l < 2; l++)
    {
        s2=a*s2;
    }

    sum2=s5+s4+s3*2+s2*3+a*4+3;
    printf("\nc=a^5+a^4+2a^3+3a^2+4a+3 = %d",sum2);
    sum3=2+3*a;
    printf("\nc=2+3a = %d",sum3);
    return 0;
}