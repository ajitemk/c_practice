/*program to show the use of a function that returns pointer*/
#include<stdio.h>
int *fun(int *p,int n);
int main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10},n,*ptr;
	n=5;
	ptr=fun(arr,n);	
	printf("value of arr=%u, value of ptr=%u,value of *ptr = %d\n",arr,ptr,*ptr);
	return 0;
}
int *fun(int *p,int n)
{
	p=p+n;
	return p;
}
