#include<stdio.h>
#include<math.h>
long long int i,count=0;
long long arr[100],j,sum=0;
int compute()
{
	for(i=0;i<100;i++)
	{
		if(pow(2,i)<=1000000000000000000)
		{
			arr[i]=pow(2,i);
			count++;
		}
	}
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n,sum=0;
		scanf("%lld",&n);
		compute();
	//	for(i=0;i<count;i++)
	//		printf("%lld ",arr[i]);
		for(i=0;i<count;i++)
		{
			//printf("a:%lld ",arr[i]);
			for(j=i+1;j<count;j++)
			{
				if(i!=j)
				{
					if(arr[i]+arr[j]<=n)
					{
						sum+=(arr[i]+arr[j])%1000000007;
			//			printf("a:%lld b:%lld ",arr[i],arr[j]);
					}
				}
			}
		}
		printf("%lld\n",sum%1000000007);
	}
	return 0;
}
