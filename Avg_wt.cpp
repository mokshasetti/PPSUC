#include<stdio.h>
int main()
{
	int avg,w1,w2,w3;
	printf("Enter average,w1 and w2 values:");
	scanf("%d%d%d",&avg,&w1,&w2);
	w3=(3*avg)-(w1+w2);
	printf("%d",w3);
	return 0;
}
