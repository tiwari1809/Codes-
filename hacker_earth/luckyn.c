#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		unsigned long long int n,i,j,sum=0;
		scanf("%lld",&n);
		for(i=2;i<n;i=2*i)
		{
			for(j=1;j<i;j=2*j)
			{
				if(i+j<=n)
				sum+=(i+j)%1000000007;
				//printf("l:%lld %lld %lld",sum,i,j);
			}
		}
		printf("%lld\n",sum%1000000007);
	}
	return 0;
}



