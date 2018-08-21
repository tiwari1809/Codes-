#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long g;
		scanf("%lld",&g);
		while(g--)
		{
			long long f,n,q;
			scanf("%lld%lld%lld",&f,&n,&q);
			long long i,j,a=0,coin[n+5];
			for(i=0;i<n;i++)
				coin[i]=f;
			while(a!=n)
			{
				for(i=0;i<=a && i<n;i++)
				{
					if(coin[i]==1)
						coin[i]=2;
					else 
						coin[i]=1;
				}
				a++;
			}
			long long count=0;
			for(i=0;i<n;i++)
			{
				if(coin[i]==q)
					count++;
			}
			printf("%lld\n",count);
		}
	}
		return 0;
}
