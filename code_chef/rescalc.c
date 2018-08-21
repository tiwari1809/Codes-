#include<stdio.h>
#include<stdlib.h>
typedef struct arr{
	int s;
	int a[100];
}arr;
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,i,j;
		scanf("%d",&n);
		arr c[n];
		int count[n],count1[6];
		for(i=0;i<n;i++){
			count[i]=0;
			count1[i]=-1;
		}
		for(i=0;i<n;i++){
			scanf("%d",&(c[i].s));
			for(j=0;j<(c[i].s);j++)
				scanf("%d",&(c[i].a[j]));
		}
		for(i=0;i<n;i++)
		{
			int sum=0,a,b;
			for(a=0;a<6;a++)
				count1[i]=-1;
			count[i]+=c[i].s;
			for(j=0;j<c[i].s;j++)
			{
				printf("%d ",c[i].a[j]);
				count1[c[i].a[j]]++;
			}
			for(a=0;a<6;a++)
			{
				printf("c1:%d ",count1[i]);
				if(count1[i]>=0)
					sum++;
			}
			if(sum==4)
				count[i]+=1;
			if(sum==5)
				count[i]+=2;
			if(sum==6)
				count[i]+=4;
			printf("c:%d ",count[i]);

		}
		int max=-1,flag=0,ans,l;
		for(i=0;i<n;i++)
		{
			if(count[i]>max)
			{
				max=count[i];
				ans=i;
			}
			else if(count[i]==max)
			{
				flag=1;
				l=count[i];
			}
		}
		if(flag==1 && max==l)
			printf("tie\n");
		else if(ans==0)
			printf("chef\n");
		else 
			printf("%d\n",ans);
	}
	return 0;
}
