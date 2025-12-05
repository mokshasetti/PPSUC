#include<stdio.h>
int main()
{
	int X,Y,home;
    printf("Enter X and Y values:");
    scanf("%d%d",&X,&Y);
    home=(5*X)/Y;
    if(home>=1)
    {
    	printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
