#include<stdio.h>
int main()
{
	float y;
	int x;
	scanf("%d %f",&x,&y);
	if(x%5==0 && y-0.5>x)
	{
		printf("%.2f\n",y-x-0.5);
	}
	else 
	{
		printf("%.2f\n",y);
	}
	return 0;
}
