#include<stdio.h>
int scan(int n)
{
	if(n==42)
		return 0;
	scanf("%d",&n);
	if(n!=42)
	printf("%d\n",n);
	scan(n);
}
int main()
{
	int n;
	scan(n);
	
	return 0;
}


