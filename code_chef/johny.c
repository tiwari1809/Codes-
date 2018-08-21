#include<stdio.h>
void merge(int arr[],int min,int mid,int max);
void merge_sort(int arr[],int min,int max)
{
	int mid;
	if(min<max)
	{
		mid=(min+max)/2;
		merge_sort(arr,min,mid);
		merge_sort(arr,mid+1,max);
		merge(arr,min,mid,max);
	}
}
void merge(int arr[],int min,int mid,int max)
{
	int tmp[30];
	int i,j,k,m; 
	j=min;
	m=mid+1;
	for(i=min; j<=mid && m<=max ; i++)
	{
		if(arr[j]<=arr[m])
		{
			tmp[i]=arr[j];
			j++;
		}
		else
		{
			tmp[i]=arr[m];
			m++;
		}
	}
	if(j>mid)
	{
		for(k=m; k<=max; k++)
		{
			tmp[i]=arr[k];
			i++;
		}
	}
	else
	{
		for(k=j; k<=mid; k++)
		{
			tmp[i]=arr[k];
			i++;
		}
	}
	for(k=min; k<=max; k++)
		arr[k]=tmp[k];
}

int binsearch(int a[],int x,int low,int high)
{
	int mid=(low+high)/2;
	if ( x==a[mid])
		return (mid);
	else if(x>a[mid])
	{
		binsearch(a,x,mid+1,high);
	}
	else
	{
		binsearch(a,x,low,mid-1);
	}
}

int main ()
{
	int T;
	scanf("%d",&T);
	while (T--)
	{
		int i,j,N;
		scanf("%d",&N);
		int a[N];
		for(i=0;i<N;i++)
			scanf("%d",&a[i]);
		int k;
		scanf("%d",&k);
		int temp=a[k-1];
		merge_sort(a,0,N-1);
		//for(i=0;i<N;i++)
		//	printf("%lld ",a[i]);
		//long long ans;
		/*for(i=0;i<N;i++)
		{
			if(a[i]==temp)
			{
				ans=i;
				break;
			}
		}*/
		int ans=binsearch(a,temp,0,N);

		printf("%d\n",ans+1);

	}
	return 0;
}



