#include<stdio.h>
double fact(double n)
{
	if(n<=1)
		return 1;
	else 
		return (n*fact(n-1));
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		double n;
		scanf("%lf",&n);
		double ans=fact(n);
		printf("%.0lf\n",ans);
	}
	return 0;
}

