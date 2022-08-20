#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    int sum1,sum2,sum3;
    scanf("%d %d",&a,&b);
    sum1=2*a+b;
    printf("c=2a+b = %d",sum1);
    sum2=pow(a,5)+pow(a,4)+(pow(a,3)*2)+(pow(a,2)*3)+4*a+3;
    printf("\nc = a^5+a^4+2a^3+3a^2+4a+3 = %d",sum2);
    sum3=2+3*a;
    printf("\nc=2+3a = %d",sum3);
    
    return 0;
}