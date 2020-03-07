#include<stdio.h>
int main(void)
{
	int *arr[3];
	int i,a=5,b=10,c=15;
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;
	for(i=0;i<3;i++)
	{
		printf("arr[%d]=%u\t",i,arr[i]);
		printf("*arr[%d]=%d\n",i,*arr[i]);
	}
	return 0;
}
