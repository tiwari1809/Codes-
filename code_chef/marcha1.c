#include<stdio.h>
#include<math.h>
int powerset(int a[],int n,int m){
	int num=pow(2,n),i,j,sum=0,flag=0;
	for(i=0;i<num;i++){
		sum=0;
		for(j=0;j<=i;j++){
			if(i&(1<<j)) sum+=a[j];
		}
		if(sum==m){
			flag=1;
			printf("Yes\n");
			break;
		}
	}
	if(flag==0) printf("No\n");
	return 0;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,m;
		scanf("%d%d",&n,&m);
		int i,j,a[n];
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		powerset(a,n,m);
	}
	return 0;
}
