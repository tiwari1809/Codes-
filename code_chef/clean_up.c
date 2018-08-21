#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int a1[n],a2[m];
		int i,j;
		for(i=0;i<m;i++)
			scanf("%d",&a2[i]);
		for(i=0;i<n;i++)
			a1[i]=i+1;
		qsort(a2, m , sizeof(int), cmpfunc);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a1[i]==a2[j])
					a1[i]=0;
			}
		}
		int chef[n],ass[n],count=0,a=0,s=0;
		for(i=0;i<n;i++)
		{
			if(a1[i]!=0)
			{
				count++;
				if(count%2!=0)
				{
					chef[a]=i;
					a++;
				}
				else 
				{
					ass[s]=i;
					s++;
				}
			}
		}
		for(i=0;i<a;i++)
			printf("%d ",chef[i]+1);
		printf("\n");
		for(i=0;i<s;i++)
			printf("%d ",ass[i]+1);
		printf("\n");
	}
	return 0;
}

