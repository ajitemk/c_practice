#include<stdio.h>
int main(void)
{
	int a=5,b=10,sum;
	int *ptr=&a;
	int *pb=&b;
	sum = *ptr+*pb;
	printf("%d",sum);;
	
	return 0;
}
