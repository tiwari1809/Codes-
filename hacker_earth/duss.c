#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int l=pow(2,n)-1;
	int a[l][l];
	for(i=0;i<l;i++)
	{
		for(j=0;j<=i;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<l;)
	{
		for(j=0;j<l;)
		{
			

