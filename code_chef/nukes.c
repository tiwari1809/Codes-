#include<stdio.h>

int main()
{
	long long a,n,k;
	scanf("%lld %lld %lld",&a,&n,&k);
	long long count[k];
	long long i,j;
	for(i=0;i<k;i++)
		count[i]=0;
	while(a!=0)
	{
		int K=0;
	/*	if(count[K]==0)
		{
			count[K]+=n;
			a=a-n;
		}
		else
		{
	 */	
			count[K]++;
			a--;
		
		for(i=0;i<k;i++)
		{
			if(count[i]>n)
			{
				count[i]=0;
				count[i+1]++;
			}

		}
	}
	for(i=0;i<k;i++)
		printf("%lld ",count[i]);
	printf("\n");
return 0;
}
