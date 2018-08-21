#include<stdio.h>
#include<math.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a[n],i,j;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		long long  min=1000000000;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				//if(i==j)
				//	break;
				//else 
				
					if(min>abs(a[i]-a[j]))
							min=abs(a[i]-a[j]);
				
			}
		}
		printf("%lld\n",min);
	}
	return 0;
}



