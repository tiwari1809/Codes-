#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long N;
		scanf("%lld",&N);
		long long i,k;
		k=N;
		for(i=1;i<N;i++)
		{
			
			printf("%lld ",k);
			long long g=N*(k-i);
			N=g;
			
		}
		//printf("N:%lld ",N);
		long long count=0;
		while(N%10==0)
		{
			N=N/10;
			count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}

