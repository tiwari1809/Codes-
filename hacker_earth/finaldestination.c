#include<stdio.h>
#include<string.h>
int main()
{
	char st[100005];
	scanf("%s",st);
	int l=strlen(st),x=0,y=0,i;
	for(i=0;i<l;i++)
	{
		if(st[i]=='L')
			x-=1;
		if(st[i]=='R')
			x+=1;
		if(st[i]=='U')
			y+=1;
		if(st[i]=='D')
			y-=1;
	}
	printf("%d %d\n",x,y);
	return 0;
}

