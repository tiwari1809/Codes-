#include<stdio.h>

long long a[1000000000];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long  G;
		scanf("%lld",&G);
		while(G--)
		{
			long long I,N,Q,i,j;
			scanf("%lld%lld%lld",&I,&N,&Q);
			for(i=0;i<N;i++)
			{
				a[i]=I;
			}
			if(N%2==0)
			{
				for(i=1;i<N;i=i+2)
				{
					if(a[i]==1)
						a[i]=2;
					else
						a[i]=1;
				}
			}
			else 
			{
				for(i=0;i<N;i=i+2)
				{
					if(a[i]==1)
						a[i]=2;
					else 
						a[i]=1;
				}
			}
			long long count=0;
			for(i=0;i<N;i++)
			{
				if(a[i]==Q)
					count++;
			}
			printf("%lld\n",count);
		}
	}
	return 0;
}


