#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char st[12350];
		scanf("%s",st);
		int l=strlen(st);
		int i,j,flag=0;
		
		for(i=0,j=l-1;i<j;i++,j--)
		{
			if (st[i]=='.' && st[j]=='.') {st[i]=st[j]='a';continue;}
			if(st[i]!=st[j])
			{
				if(st[i]=='.')
				{
					char temp=st[j];
					st[i]=temp;
				}
				else if(st[j]=='.')
				{
					char temp=st[i];
					st[j]=temp;
				}
				else 
				{
					flag=1;
					break;
				}
			}
		}
		if(st[l/2]=='.')
			st[l/2]='a';
		if(l%2==0)
		{
			if(flag==0) 
			{
				for(i=0;i<l;i++)
					printf("%c",st[i]);
				printf("\n");
			}
			else printf("-1\n");
		}
		else{
			if(flag==1)
				printf("-1\n");
			if(flag==0) 
			{
				for(i=0;i<l;i++)
					printf("%c",st[i]);
				printf("\n");
			}

		}
	}
	return 0;
}

