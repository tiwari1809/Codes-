#include<stdio.h>
#include<stdlib.h>
typedef struct {
	long long s;
	long long f;
} as;
as a[100000];

int compare(const void *a,const void *b) {
	    return ((as *)a)->f - ((as *)b)->f;
}
int countSetBits(int x) { return __builtin_popcount(x); }

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,i,j;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			long long  temp;
			scanf("%lld",&temp);
			a[i].s=temp;
			long long N=a[i].s;
			a[i].f=countSetBits(N);
		}
		qsort(a,n,sizeof(as),compare);
		for(i=0;i<n;i++)
			printf("%lld ",a[i].s);
		printf("\n");
	}
	return 0;
}
