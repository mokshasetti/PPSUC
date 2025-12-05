#include<stdio.h>
int main()
{
	int min,hours,minutes;
	printf("Enter a number:");
	scanf("%d",&min);
	hours=min/60;
	minutes=min%60;
	printf("%d Hour(s) %d Minute(s)",hours,minutes);
	return 0;
}
