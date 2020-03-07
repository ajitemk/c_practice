#include<stdio.h>
void swap(int *a ,int *b);
int main(void)
{
	int a=2,b=5;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	swap(pa,pb);
	printf("a=%d b=%d *pa= %d *pb= %d",a,b,*pa,*pb);
	return 0;
}
swap(int *pa,int *pb)
{
	int temp;
	temp=*pa;
	*pa=*pb;
	*pb =temp;
}
