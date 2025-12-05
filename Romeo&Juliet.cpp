#include<stdio.h>
int main()
{
	int X,Y,Z,max;
	printf("Enter X,Y and Z values:");
	scanf("%d%d%d",&X,&Y,&Z);
	max=(5*X+10*Y)/Z;
	printf("%d",max);
	return 0;
}
