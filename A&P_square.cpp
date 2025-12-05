#include<stdio.h>
int main()
{
	int side,area,perimeter;
	printf("Enter a value:");
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("%d ",area);
	printf("%d",perimeter);
	return 0;
}
