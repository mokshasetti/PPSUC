#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if((n%2)==0||n==2||n==3||n==4||n==5)
	{
		printf("not weird");
	}
	else
	{
		printf("weird");
	}
	return 0;
}
