#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("invalid\n");
	}
	else if(num%2!=0)
	{
	printf("given num is odd");
	}
	else
	{
	printf("given num is even\n");
	}
	return 0;
}
