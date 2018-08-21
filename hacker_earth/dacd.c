#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		if(n%2==0)
			printf("%d %d\n",n/2,n/2);
		else 
			printf("%d %d\n",n/2,n/2+1);
	}
	return 0;
}


