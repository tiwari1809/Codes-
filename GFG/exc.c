#include<stdio.h>
extern int i=10;
//i=10;
int main()
{
	i=100;
	printf("%d\n",i);
	return 0;
}

