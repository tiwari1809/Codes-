#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return b;
	else return a;
}
/*int maxSubArraySum(int a[], int size)
{
	int max_so_far = a[0];
	int curr_max = a[0];

	for (int i = 1; i < size; i++)
	{
		curr_max = max(a[i], curr_max+a[i]);
		max_so_far = max(max_so_far, curr_max);
	}
	return max_so_far;
}*/

int main()
{
	long long int n,i;
	scanf("%lld",&n);
	long long int a[1000005],sum=0,max=0;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
	{
		if(sum+a[i]>=0)
		{
			sum+=a[i];
			if(sum>max)
				max=sum;
		}
		else sum=0;
	}
	printf("%lld\n",max);
	return 0;
}
