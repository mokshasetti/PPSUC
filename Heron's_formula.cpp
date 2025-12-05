#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,A;
	printf("Enter a,b and c values:");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.4lf",A);
	return 0;
}
