#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i=1,j=7,count=0;
		//printf("%d ",i^j);
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(i!=j)
				{
					if((i^j)<=n)
						count++;
				}
			}
		}
	printf("%d\n",count);
	}
	return 0;
}



