#include<stdio.h>
#include<string.h>
int main ()
{
	char st[105];
	scanf("%s",st);
	int l=strlen(st);
	int i,j,s=0,flag=0;
	while(6+s<=l)
	{
		int sum=0;
		for(i=0+s;i<6+s;i++)
		{
			sum+=st[i];
			/*if(sum==6 || sum==0)
			  {
			  printf("Good luck!\n");
			  flag=1;
			  break;
			  }*/
		//	printf("%d ",sum);
		}
		if(sum==288 || sum==294)
		{
			printf("Sorry, sorry!\n");
			flag=1;
			break;
		}
		s++;
	}
	if(flag==0)
		printf("Good luck!\n");
	return 0;
}
