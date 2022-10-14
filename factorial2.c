#include<stdio.h>

int Factorial(int f)
{
	if(f == 0 || f == 1)
    {
		return 1;
	}
	else
    {
		return f * Factorial(f-1);
	}
}

int main()
{
	int f;
	printf("Input number : ");
	scanf("%d",&f);
	if(f < 0)
    {
		printf("Error!");
	}
	else
    {
		printf("%d",Factorial(f));
	}
}
