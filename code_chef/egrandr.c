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
		int flag=0,sum=0,FLAG=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==2)
			{
				printf("No\n");
				FLAG=1;
				break;
			}
			if(a[i]==5)
				flag=1;
			sum+=a[i];
		}
		if(FLAG==0)
		{
		if(flag==0)
			printf("No\n");
			if((sum/n)<4)
			printf("No\n");
			else 
			printf("Yes\n");
		}
	}
	return 0;
}







