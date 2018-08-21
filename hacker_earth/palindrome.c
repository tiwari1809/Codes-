#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char s[105];
	scanf("%s",s);
	int n=strlen(s),flag=0;
	if(n%2==0)
	{
		for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
		{
			if(s[i]!=s[j])
			{
				flag=1;
				break;
			}
		}
	}
	else 
	{
		for(i=0,j=n-1;i<n/2,j>n/2;i++,j--)
		{
			if(s[i]!=s[j])
			{
				flag=1;
				break;
			}
		}
	}

	if(flag==0)
		printf("YES\n");
	else 
		printf("NO\n");
	return 0;
}




