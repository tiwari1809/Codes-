#include<stdio.h>

/*
  int comp(void *a,void *b)
  {
  return *(long long int *)a - *(long long int *)b;
  }
*/
void merge_sort(long long int *arr,long long int low,long long int high)
{
	long long int mid;
	mid=(low+high)/2;

	if(low<high)
	{
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);

		merge(arr,low,mid,high);
	}
}

void merge(long long int *arr,long long int l,long long int m,long long int h)
{
	long long int temp[10000],i=l,j=m+1,k=l;
	while(i<=m&&j<=h)
	{
		if(arr[i]<arr[j])
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	;
	while(i<=m)
	{
		temp[k++]=arr[i++];
	}
	while(j<=h)
	{
		temp[k++]=arr[j++];
	}
	//printf("%d %d\n",l,h);
	for(i=l;i<k;i++)
	{
		//  printf("%d ",temp[i]);
		arr[i]=temp[i];
	}
	//scanf("%*d");
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long  n;
		scanf("%lld",&n);
		long long a[n],i,j;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
	//	qsort(a,n,sizeof(long long int),comp);
		merge_sort(a,0,n-1);
		long long min=1000000000;
		for(i=0;i<n-1;i++)
		{
			long long diff=a[i+1]-a[i];
			if(diff<min)
				min=diff;
		}
		printf("%lld\n",min);
	}
	return 0;
}




