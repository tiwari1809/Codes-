#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char st[100005];
		scanf("%s",st);
		int i,j,count=0;
		int l=strlen(st);
		for(i=0;i<l;i++)
		{
			if(st[i]=='B')
			{
				if(i>=1)
				{
					if(st[i-1]=='W')
					{
						count++;
						st[i-1]='A';
					}
				}
				if(i>=i-2)
				{
					if(st[i-2]=='W')
					{
						count++;
						st[i-2]='A';
					}
				}
				if(i<l-1)
				{
					if(st[i+1]=='W')
					{
						count++;
						st[i+1]='A';
					}
				}
				if(i<l-2)
				{
					if(st[i+2]=='W')
					{
						count++;
						st[i+2]='A';
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
