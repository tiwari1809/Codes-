#include<stdio.h>
#include<stdlib.h>
long long int cmpfunc (const void * a, const void * b)
{
	   return ( *(long long int*)a - *(long long int*)b );
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		long long int i,j,s[n];
		for(i=0;i<n;i++) scanf("%lld",&s[i]);
		qsort(s,n,sizeof(long long int),cmpfunc);
		long long int min=1000000001,diff;
		for(i=0;i<n-1;i++){
			diff=s[i+1]-s[i];
			if(diff<min) min=diff;
		}
		printf("%lld\n",min);
	}
	return 0;
}
