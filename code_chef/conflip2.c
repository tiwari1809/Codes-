#include<stdio.h>

int main()
{
	long long T;
	scanf("%lld",&T);
	while(T--)
	{
		long long G;
		scanf("%lld",&G);
		while(G--)
		{
			long long i,n,q,a,b;
			scanf("%lld%lld%lld",&i,&n,&q);
			long long init[n];
			for(a=0;a<n;a++)
				init[a]=i;
			if(n%2!=0)
			{
				for(a=0;a<n;a+=2)
				{
					if(init[0]=1)
						init[a]=2;
					else
						init[a]=1;
				}
			}
			else
			{
				for(a=1;a<n;a+=2)
				{
					if(init[0]=1)
						init[a]=2;
					else 
						init[b]=1;
				}
			}

			long long count=0;
			for(a=0;a<n;a++)
				if(init[a]!=q)
					count++;
			printf("%lld\n",count);
		}
	}
	return 0;
}



