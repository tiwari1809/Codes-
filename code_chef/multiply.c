#include<stdio.h>
int main()
{
	int a[2]={2,3};
	int A=12,temp=0,i;
	for(i=0;i<2;i++)
	{
		int x=a[i]*A+temp;
		a[i]=x%10;
		temp=x/10;
	}
	while(temp!=0)
	{
		a[i]=temp%10;
		temp=temp/10;
		i++;
	}
	for(i=4;i<=0;i--)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}

