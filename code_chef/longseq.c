#include<stdio.h>
#include<string.h>
int main()
{
	long long int T;
	scanf("%lld",&T);
	while(T--)
	{
		char st[100005];
		scanf("%s",st);
		long long int i,j,l=strlen(st),count=0;
		char a=st[0];
		for(i=0;i<l;i++)
		{
			if('1'==st[i])
			{
				count++;
			}
		}
		if(count ==l-1 || count ==1) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

