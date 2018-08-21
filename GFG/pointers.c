#include<stdio.h>

int main()
{
	int a=2,b=3;
	int *p1=&a;
	int *p2=&b;
	int temp =*p1;
	*p1=*p2;
	*p2=temp;
	printf("%d %d",*p1,*p2);
	return 0;
}
