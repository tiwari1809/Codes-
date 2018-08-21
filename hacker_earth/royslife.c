#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
typedef struct{
	char st[1445];
}string;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	string s[n];
	int max[n],count=0,count1=0,max1[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		max[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count1=0;
		int flag=0;
		for(j=0;j<1440;j++)
		{
			if(s[i].st[j]=='C')
			{
				count++;
				flag=1;
			}
			if(max[i]<=count)
				max[i]=count;
			if(flag==0)
				count=0;
			if(s[i].st[j]=='C')
				count1++;

		}
		max1[i]=count1;
	}
	qsort(max,n,sizeof(int),cmpfunc);
	qsort(max1,n,sizeof(int),cmpfunc);
	printf("%d %d\n",max[n-1]-1,max1[n-1]+1);
	return 0;
}
