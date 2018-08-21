#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=a-b;
	int temp=ans%10;
	if(temp==9) ans--;
	else ans++;
	printf("%d\n",ans);
	return 0;
}
