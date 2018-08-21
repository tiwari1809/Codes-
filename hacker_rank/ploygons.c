#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1)
		printf("2\n");
	else if(n==2)
	{
		if(a[0]!=a[1])
		printf("1\n");
		else 
			printf("2\n");
	}
	else if(n==3)
	{
		if(a[0]+a[1]>a[2] && a[1]+a[2]>a[0] && a[0]+a[2]>a[1])
			printf("0\n");
		else 
			printf("1\n");
	}
	else 
		printf("0\n");
	return 0;
}

