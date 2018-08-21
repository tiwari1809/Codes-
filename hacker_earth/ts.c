#include<stdio.h>
#include<string.h>
int main()
{
	char st[105];
	int i,j;
	scanf("%s",st);
	int l=strlen(st);
//	printf("%d",st[0]);
	for(i=0;i<l;i++)
	{
		if(st[i]>=97)
			st[i]=st[i]-32;
		else 
			st[i]=st[i]+32;
	}
	for(i=0;i<l;i++)
		printf("%c",st[i]);
	return 0;
}
			

