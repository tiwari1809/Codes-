#include<stdio.h>
#include<string.h>
#include<math.h>
int fabsh(int x){
	if(x<0)
		return -x;
	else return x;
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char st[55];
		scanf("%s",st);
		int l=strlen(st),i,j,flag=0;
		for(i=0,j=1;j<l;i++,j++)
		{
			if(fabsh(st[i]-st[j])!=1 && fabsh(st[i]-st[j])!=25)
				flag=1;
//			printf("%d ","st[i]"-"st[j]");
		}
		if(flag==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}


