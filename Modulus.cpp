#include<stdio.h>
int main()
{
	int num1,num2,modulus;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	modulus=num1%num2;
	printf("%d",modulus);
	return 0;
}
