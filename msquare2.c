#include <stdio.h>

int main()
{
    int a,sum=0,result=0,di1=0,di2=0;
    scanf("%d",&a);
    int colum[a];
    int num[a*a];

    for (int i = 0; i < a*a; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < a; i++)
    {
        result += num[i];
    }
    for (int i = 0;i < a*a;i++)
    {
        sum += num[i];
        if ((i+1)%a == 0)
        {
            if (sum != result)
            {
                printf("NO");
                return 0;
            }
            sum = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        colum[i]=0;
    }
    for (int i = 0;i < a*a;i++)
    {
        if ((i+1)%a!=0)
        {
            colum[((i+1)%a)-1]+=num[i];
        }
        else
        {
            colum[a-1]+=num[i];
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (colum[i] != result)
        {
            printf("NO");
            return 0;
        }
    }
    for (int i = 0; i < a*a; i+=a+1)
    {
        di1 += num[i];
    }
    for (int i = a-1; i < a*a; i+=a-1)
    {
        if (i<a*a-1)
        {
            di2 += num[i];
        }
    }
    if ( result != di1 || result != di2 )
    {
        printf("NO");
    }
    else
    printf("YES");

}
