#include<stdio.h>
int main()
{
	int x,y,z,max_mango;
	printf("Enter x,y and z values:");
	scanf("%d%d%d",&x,&y,&z);
	max_mango=(z-y)/x;
	printf("%d",max_mango);
	return 0;
}
