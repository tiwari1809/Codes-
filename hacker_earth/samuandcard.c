#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n,m;
		scanf("%lld%lld",&n,&m);
		long long k;
		scanf("%lld",&k);
		long long a[2*k],i;
		for(i=0;i<2*k;i++)
			scanf("%lld",&a[i]);
		i=0;
		long long count=0,x=1,y=1;
		while(i<2*k)
		{
			int flag=0;
			while(1<=x+a[i] && x+a[i]<=n && 1<=y+a[i+1] && y+a[i+1]<=m)
			{
				flag=1;
				x+=a[i];
				y+=a[i+1];
				count++;
			}
			if(flag==0)
				i+=2;
		}
		printf("%lld\n",count);
	}
	return 0;
}
