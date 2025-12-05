#include<stdio.h>
int main()
{
	int num1,num2,remainder,quotient,product,difference,sum;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	difference=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	remainder=num1%num2;
	printf("Sum=%d\n",num1+num2);
	printf("Difference=%d\n",num1-num2);
	printf("Product=%d\n",num1*num2);
	printf("Quotient=%d\n",num1/num2);
	printf("Remainder=%d\n",num1%num2);
	return 0;
}
