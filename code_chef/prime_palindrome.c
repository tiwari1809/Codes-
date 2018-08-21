#include<stdio.h>
int main()
{
	long long int N;
	scanf("%lld",&N);
	long long int i,j,FLAG=0,prime=N;
	long long int primen,f;
	while(FLAG!=1)
	{
		for(i=prime;i<1003002;i++)
		{
			long long int flag=0;
			for(j=2;j<=i/2;++j)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		prime=i;
	//	printf("prime:%d ",prime);
		primen=0;
		while(i!=0)
		{
			f=i%10;
			primen=primen*10+f;
			i=i/10;
		}
		if(prime==primen)
		{
	//		printf("5 ");
			FLAG=1;
		}
		else
		prime++;
	}
	printf("%lld\n",primen);
	return 0;
}
