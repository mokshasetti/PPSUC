#include<stdio.h>
int main()
{
	int c,s;
	float loss;
	printf("Enter c and s values:");
	scanf("%d%d",&c,&s);
	loss=(c-s)*100.0/c;
	printf("%.2f",loss);
	return 0;
}
