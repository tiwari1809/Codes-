#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,i;
		scanf("%d",&n);
		char s[n+5];
		scanf("%s",s);
	//	for(i=0;i<n;i++)
		//	printf("%s",s);
		int count=0,max=0,j;
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(i!=j)
				{
					if(s[i]==s[j])
						count++;
					if(max<count)
						max=count;
				}
			}
		}
		
	//	if(n!=1)
			printf("%d\n",n-max-1);
	//	else 
	//		printf("0\n");
	
	}
	return 0;
}
