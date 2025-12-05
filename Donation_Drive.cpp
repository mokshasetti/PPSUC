#include<stdio.h>
int main()
{
	int N,X,remaining;
	printf("Enter N and X values:");
	scanf("%d%d",&N,&X);
	remaining=N-X;
	printf("%d",remaining);
	return 0;
}
