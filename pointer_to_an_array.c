/*program to understand difference between pointer to an integer and pointer to an array of integer */
#include<stdio.h>
int main(void)
{
	int *p;int (*ptr)[5];
	int arr[5];
	p=arr;
	ptr=arr;
	printf("p=%u, ptr=%u\n",p,ptr);
	p++;
	ptr++;
	printf("p=%u, ptr=%u\n",p,ptr);
	return 0;
}
