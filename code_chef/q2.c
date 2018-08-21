#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long r,g,b,k;
		scanf("%lld %lld %lld %lld",&r,&g,&b,&k);
		long long ou[3]={ 0 };
		long long count =0;
		while(ou[0]!=k || ou[1]!=k || ou[2]!=k)
		{
			if(r!=0)
			{
				r--;
				count++;
				ou[0]++;
			}
			if(g!=0)
			{
				g--;
				count++;
				ou[1]++;
			}
			if(b!=0)
			{
				b--;
				count++;
				ou[2]++;
			}
		}
			printf("%lld\n",count-2);	
	}
	return 0;
}



