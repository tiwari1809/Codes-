#include<stdio.h>
int main()
{
	int i,j;
	int a;
	char s;
	scanf("%c",&s);
	scanf("%d",&a);
	if(a==1 || a==8)
	{
		if(s=='a' || s=='h')
			printf("3\n");
		else 
			printf("5\n");
	}
	else if(s=='a' || s=='h')
	{
		if(a!=1 && a!=8)
			printf("5\n");
	}
	else 
		printf("8\n");
	return 0;
}
