#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}

int main() 
{
	int n;
	scanf("%d",&n);
	long long a[n],b[n],i,j,c[n];
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
		scanf("%lld",&b[i]);
	qsort(a,n,sizeof(long long), cmpfunc);
	qsort(b,n,sizeof(long long), cmpfunc);
//	for(i=0;i<n;i++)
//		printf("%lld ",a[i]);
//	printf("\n");
	for(i=0;i<n;i++)
		c[i]=a[i]-b[i];
	long long sum=0;
	long long count=0;
	//mergesort(c,0,n);
	for(i=0;i<n;i++)
		sum+=c[i];
	if(sum==0)
	{
		for(i=0;i<n;i++)
		{
			if(c[i]>0)
				count+=c[i];
		}
			printf("%lld\n",count);
	}
	else
		printf("-1\n");

	return 0;
}






