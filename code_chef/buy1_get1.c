#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char string[205];
		scanf("%s",string);
		int i,len=strlen(string),sum=0,j;
		for(i=0;i<len;i++)
		{
			int count=0;
			for(j=0;j<len;j++)
			{
				if(string[i]==string[j])
					count++;
			}
			if(count%2!=0)
				sum=sum+count/2+1;
			else
				sum=sum+count/2;
		}
		printf("%d\n",sum);
	}
	return 0;
}

