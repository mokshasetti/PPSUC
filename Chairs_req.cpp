#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x and y values:");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		printf("%d",x-y);
	}
	else
	{
		printf("0");
	}
	return 0;
}
