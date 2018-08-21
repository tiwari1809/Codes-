#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,i;
		scanf("%d",&n);
		long long int b[n],a[n];
	        long long suma=0,sumb=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
			sumb+=b[i]%1000000007;
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			suma+=a[i]%1000000007;
		}
		if(suma%1000000007>sumb%1000000007)
			printf("Alice\n");
		else if(suma%1000000007<sumb%1000000007)
			printf("Bob\n");
		else printf("Tie\n");
	}
	return 0;
}
