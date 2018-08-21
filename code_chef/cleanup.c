#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,m,i,j;
		scanf("%d%d",&n,&m);
		int a[n],b[m],c[n];
		for(i=1;i<=n;i++){
			c[i]=0;
			a[i]=1;
		}
		for(i=1;i<=m;i++)
			scanf("%d",&b[i]);
		for(i=1;i<=m;i++){
			c[b[i]]=1;
		}
		for(i=1;i<=n;i++)
			a[i]=a[i]-c[i];
		int count=1,chef[n],ass[n],cw=0,aw=0;
		for(i=1;i<=n;i++){
			chef[i]=0;
			ass[i]=0;
		}
		for(i=1;i<=n;i++){
			if(a[i]==1 && count%2!=0){
				chef[i]=i;
				count++;
			}
			else if(a[i]==1){
				ass[i]=i;
				count++;
			}
		}
		for(i=1;i<=n;i++) if(chef[i]!=0){printf("%d ",chef[i]);}
		printf("\n");
		for(i=1;i<=n;i++) if(ass[i]!=0){printf("%d ",ass[i]);}
		printf("\n");

	}
	return 0;
}
		



