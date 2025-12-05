#include<stdio.h>
int main()
{
	int r,c,e,cells;
	printf("Enter r,c and e values:");
	scanf("%d%d%d",&r,&c,&e);
	cells=(r+e)*c;
	printf("%d",cells);
	return 0;
}
