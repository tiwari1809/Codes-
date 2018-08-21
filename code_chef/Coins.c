#include<stdio.h>
long long int sum=0;
int ret(int n){
	sum=0;
	int flag =0;
	if(n>(n/2 +  n/3 + n/4)){
		int temp1=n/2;
		int temp2=n/3;
		int temp3=n/4;
		sum+=(temp3+temp1+temp2);
		ret(temp1);
		ret(temp2);		
		ret(temp3);
		flag=1;
	}
	if (flag==0)
	{
		sum=n;
	}
	return sum;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long n;
		scanf("%lld",&n);
		ret(n);
		printf("%lld\n", sum);
		}
	return 0;
}
