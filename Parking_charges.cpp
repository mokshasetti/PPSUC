#include<stdio.h>
int main()
{
	int X,Y,H,charges;
	printf("Enter X,Y and H values:");
	scanf("%d%d%d",&X,&Y,&H);
	charges=X+Y*(H-1);
	printf("%d",charges);
	return 0;
}
