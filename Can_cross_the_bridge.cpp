#include<stdio.h>
int main()
{
	int x,y,z,r;
	printf("Enter x, y and z values:");
	scanf("%d%d%d",&x,&y,&z);
	r=(z-y)/x;
	printf("%d",r);
	return 0;
}
