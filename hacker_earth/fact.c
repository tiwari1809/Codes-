#include<stdio.h>
int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	
	return n*fact(n-1);	
}
	
int main()
{
	int N;
	scanf("%d",&N);
	int ans=fact(N);
	printf("%d\n",ans);
	return 0;
}
