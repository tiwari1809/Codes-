#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int a[n],i,j,prod=1;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
	{
		prod=(prod%1000000007)*(a[i]%1000000007);
	}
	printf("%lld\n",prod%1000000007);
	return 0;
}



