#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int i,a[n],sum;
	long long int N=n,flag=0;
	while(N)
	{
		long long int temp=N%10;
		N=N/10;
		a[i]=temp;
		if(sum==0)
		{
			if(a[i]=a[i-1])
				sum++;
		}
		else if(sum==1)
		{
			if(a[i]==a[i-1] && a[i-2]==a[i])
				sum++;
		}
		else if(sum==2)
		{
			if(a[i]==a[i-1] && a[i-2]==a[i] && a[i]==a[i-3])
				sum++;
		}
		else if(sum==3)
		{
			if(a[i]==a[i-1] && a[i-2]==a[i] && a[i]==a[i-3] && a[i]==a[i-4])
				sum++;
		}
		else if(sum==4)
		{
			 if(a[i]==a[i-1] && a[i-2]==a[i] && a[i]==a[i-3] && a[i]==a[i-4] && a[i]==a[i-5])
				 sum++;
		}
		else if(sum==5)
		{
			if(a[i]==a[i-1] && a[i-2]==a[i] && a[i]==a[i-3] && a[i]==a[i-4] && a[i]==a[i-5] && a[i]==a[i-6])
				sum++;
		}
		else sum=0;
		if(sum==6)
		{
			printf("Sorry, sorry!\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Good luck!\n");
	return 0;
}





		
