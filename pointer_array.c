#include<stdio.h>
int main(void)
{
	int arr[5]={5,10,15,20,25};
	int i;
	for(i=0;i<5;i++)
	{
		printf("value of array arr[%d] = %d\t",i, *(arr+i)/*arr[i]*/);
		printf("address of array arr[%d] = %u\n",i,arr+i/*&arr[i]*/);
	}

return 0;

}
