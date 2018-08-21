#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i,j;
		scanf("%d",&N);
		int a[N];
		for(i=0;i<N;i++)
			scanf("%d",&a[i]);
		int k;
		scanf("%d",&k);
		int temp=a[k-1],count=0;
		for(i=0;i<N;i++)
		{
			if(a[i]<temp)
				count++;
		}
		printf("%d\n",count+1);
	}
	return 0;
}






