#include <stdio.h>

int main() {
    int f,sum=1;
	printf("Input number : ");
	scanf("%d",&f);
	if(f < 0)
    {
		printf("Error!");
	}
	else if (f == 1 || f == 0)
    {
        printf("1");
    }
    else if (f > 1)
    {
        for (int i = 1;i <= f ; i++)
        {
           sum*=i; 
        }  
        printf("%d",sum);
    }
    return 0;
}

