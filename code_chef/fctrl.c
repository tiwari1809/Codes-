#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long N;
		scanf("%lld",&N);
		long long fact=1,c,count=0;
		
		for (c = 1; c <= N; c++)
			    fact = fact * c;
		printf("%lld",fact);	
		while(fact%10==0)
		{
			fact=fact/10;
			count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}
