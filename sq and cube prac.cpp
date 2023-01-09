#include<stdio.h>
int main()
{
	int a,s,c;
	printf("enter a value = ");
	scanf("%d",&a);
	if(a<0)
	{
	printf("invalid\n");
	}
	if(a>0)
	{
	s=a*a;
	c=a*a*a;
	printf("square of num is=%d\n",s);
	printf("cube of num is=%d",c);
    }
	return 0;
}
