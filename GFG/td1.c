#include<stdio.h>
int i ;
int f(int x,int y);
int main ()
{
	int j = 60;
	i = 50;
	f (i, j);
	printf("%d %d\n",i, j);
}
int f (int x,int y)
{           
	i = 100;
	x = 10;
	y = y + i ;
}
