#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n,m,i,j,prime=1,count=0;
		scanf("%lld%lld",&m,&n);
		for(i=m;i<=n;i++)
		{
			prime=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{ 
					prime=0; 
					break;
				}
			}
				if(prime==1) 
					printf("%lld\n",i);
		}
		printf("\n");
	}
	return 0;
}
