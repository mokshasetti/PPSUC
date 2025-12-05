#include<stdio.h>
int main()
{
	float x;
	printf("Enter a value:");
	scanf("%f",&x);
	if((x/40.0)>1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
