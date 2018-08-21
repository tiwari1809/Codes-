#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long N,i;
		scanf("%lld",&N);
		long long temp,count=0,sum=0;
		for(i=1;i<=N;i++)
		{
			count=0;
			temp=i;
			while(temp)
			{
				count+=(N&1);
				temp>>=1;
			}

			if(count==2)
			{
				sum+=i;
				printf("%lld ",i);
			}
		}
		printf("%lld\n",sum%1000000007);
	}
	return 0;
}


