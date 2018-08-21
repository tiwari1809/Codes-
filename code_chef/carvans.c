#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int a[n],i,j;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int min=1000000000;
		int count=0;
		for(i=0;i<n;i++)
		{
			if(min>a[i])
			{
				min=a[i];
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}



