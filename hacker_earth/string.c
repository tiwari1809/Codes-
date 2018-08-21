#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int i,j,c1[100],c2[100];
		char s1[100005],s2[100005];
		for(i=0;i<100;i++)
		{
			c1[i]=0;
			c2[i]=0;
		}
		scanf("%s",s1);
		scanf("%s",s2);
		int l1=strlen(s1),l2=strlen(s2),flag=0;
	
		for(i=0;i<l1;i++)
		{
			c1[s1[i]-97]++;
		}
		for(i=0;i<l2;i++)
			c2[s2[i]-97]++;

		for(i=0;i<24;i++)
		{
			if(c1[i]!=0 && c2[i]!=0)
			{
				flag=1;
				printf("Yes\n");
				break;
			}
		}

		if(flag!=1)
			printf("No\n");
	}
	return 0;
}		
