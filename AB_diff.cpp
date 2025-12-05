#include<stdio.h>
int main()
{
	int a,b,diff;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	if((a*b)>(a+b))
	{
		diff=(a*b)-(a+b);
		printf("%d",diff);
	}
	else
	{
		diff=(a+b)-(a*b);
		printf("%d",diff);
	}
	return 0;
}
