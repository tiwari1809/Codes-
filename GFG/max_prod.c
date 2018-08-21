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
		int max=-1;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		 for(i=0;i<n;i++)
		 {
			 for(j=0;j<n;j++)
			 {
				 if(i==j)
					 j++;
				 else 
				 {
					 int p=a[i]*a[j];
					 if(max<p)
						 max=p;
				 }
			 }
		 }
		 printf("%d\n",max);
	}
	return 0;
}


