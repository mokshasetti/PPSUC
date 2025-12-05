#include<stdio.h>
int main()
{
	double CP,SP,profit,profit_per;
	printf("Enter CP and SP values:");
	scanf("%d%d",&CP,&SP);
	profit=SP-CP;
	profit_per=(profit/CP)*100;
	printf("%.2lf",profit_per);
	return 0;
}
