#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,cost1,cost2;
	printf("Enter cost of tiling and painting for 1st style:");
	scanf("%d%d",&x1,&y1);
	printf("Enter cost of tiling and painting for 2nd style:");
	scanf("%d%d",&x2,&y2);
	cost1=(x1+y1);
	cost2=(x2+y2);
	if(cost1<cost2)
	{
		printf("%d",cost1);
	}
	else
	{
		printf("%d",cost2);
	}
	return 0;
}
