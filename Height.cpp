#include<stdio.h>
int main()
{
	int x,y,height;
	printf("Enter x and y values:");
	scanf("%d%d",&x,&y);
	height=(x>y)?x:y;
	printf("%d",height);
	return 0;
}
