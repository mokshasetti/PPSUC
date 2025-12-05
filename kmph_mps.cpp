#include<stdio.h>
int main()
{
	float kmph,mps;
	printf("Enter a number:");
	scanf("%f",&kmph);
	mps=(kmph)*5.0/18.0;
	printf("%.2f",mps);
	return 0;
}
