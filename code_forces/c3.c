#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n],ans[n][n];
	for(i=0;i<n*n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=(i+1)*(j+1);
		}
	}
	if(n%2!=0)
	{
		for(i=0;i<n;i++)
			ans[i][i]=a[i][i];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i!=j)
					ans[i][j]=a[i][j];
			}
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				ans[i][j]=a[i][j];
			}
		}
		int temp=ans[0][0];
		ans[0][0]=ans[0][1];
		ans[0][1]=temp;
		temp=ans[0][n-1];
		ans[0][n-1]=ans[0][n-2];
		ans[0][n-2]=temp;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",ans[i][j]);
		}
	printf("\n");
	}
	return 0;
}


				




