#include<stdio.h>
long long int count=0;
/*int call(long long int n)
{
	long long int i=n,a=n,b=n,c=n;
	while(a!=0 || b!=0 || c!=0)
	{
		if(a/2!=0)
		{
			call(a/2);
			count++;
		}
		if(b/3!=0)
		{
			call(b/3);
			count++;
		}
		if(c/4!=0)
		{
			call(c/4);
			count++;
		}
		a=a/2;
		b=b/3;
		c=c/4;
	}
}*/
int main()
{
	int T;
//	scanf("%d",&T);
//	while(T--)
//	{
		long long n;
		   while(scanf("%lld", &n)!=EOF)
		if((n/2)+(n/3)+(n/4)>=n)
		{
			count=(n/2)+(n/3)+(n/4);
		}
		else 
			count=n;

		printf("%lld\n",count);
//	}
	return 0;
}


