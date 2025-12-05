#include<stdio.h>
int main()
{
	int inches;
	double cm;
	printf("Enter a value:");
	scanf("%d",&inches);
	cm=inches*2.54;
	printf("%.2f",cm);
	return 0;
}
