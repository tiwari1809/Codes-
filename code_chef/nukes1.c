#include<stdio.h>

int main()
{
	long long a,n,k;
	scanf("%lld%lld%lld",&a,&n,&k);
	long long i=0,j;
	while(a!=0)
	{
		long long ans=a%(n+1);
		printf("%lld ",ans);
		a=a/(n+1);
		i++;
	}
	for(j=i;j<k;j++)
		printf("0 ");
	printf("\n");
	return 0;
}






