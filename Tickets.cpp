#include<stdio.h>
int main()
{
	int x,cost;
	printf("Enter a number:");
	scanf("%d",&x);
	cost=(4*x);
	if(cost<=1000)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
