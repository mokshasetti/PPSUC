#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter temperature in celsius:");
	scanf("%f",&C);
	F=(C*9/5)+32;
	printf("%.2f",F);
	return 0;
}
