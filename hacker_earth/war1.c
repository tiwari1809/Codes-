#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		int i,j;
		scanf("%d",&n);
		long long a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%lld",&b[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		qsort(a,n,sizeof(long long),cmpfunc);
		qsort(b,n,sizeof(long long),cmpfunc);
		if(b[n-1]>a[n-1])
			printf("Bob\n");
		else if(b[n-1]<a[n-1])
			printf("Alice\n");
		else printf("Tie\n");
	}
	return 0;
}
