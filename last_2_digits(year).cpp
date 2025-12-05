#include<stdio.h>
int main()
{
	int n,digits;
	printf("Enter a number:");
	scanf("%d",&n);
	digits=n%100;
	printf("%02d",digits);
	return 0;
}
