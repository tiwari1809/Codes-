#include<stdio.h>
int main()
{
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	long long int count=0;
	while(n--)
	{
		long long a;
		scanf("%lld",&a);
		if(a%k==0)
			count++;
	}
	printf("%lld\n",count);
	return 0;
}
