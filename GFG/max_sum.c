#include<stdio.h>
long long int SUM=0,count=0;
long long int i=0,s=0,g;
long long int sum(long long int a[],long long int c,long long int k)
{
	if(count==0)
	{
		if(a[c]>a[c+1])
			i=c;
	
		else 
			i=c+1;
	}
	while(i<k)
	{
		if(i+3<k && i+2<k)
		{
			if(a[i+2]>a[i+3])
			{
				s=a[i]+a[i+2];
				a[i+2]=s;
				g=i+2;
				i=g;
			}
			else 
			{
				s=a[i+3]+a[i];
				a[i+3]=s;
				g=i+3;
				i=g;
			}
			SUM+=s;
		}
		else if(i+2<k && i+3>=k)
		{
			SUM+=a[i+2];
			i+=8;
		}
		else 
			break;
		count++;
		//SUM+=s;
		//printf("%d %d\n",i,k);
		if(i<k)
		{
			sum(a,i,k);
		}
	
	}
}
int  main()
{
	long long int T;
	scanf("%lld",&T);
	while(T--)
	{
		s=0;i=0,count=0;
		SUM=0;
		long long int n;
		scanf("%lld",&n);
		long long int a[n],I,j;
		for(I=0;I<n;I++)
			scanf("%lld",&a[I]);
		sum(a,0,n);
		printf("%lld\n",SUM);
	}
	return 0;
}
