#include<stdio.h>
#define MAX 10
void printArray(int arr[], int size);
int main(void)
{
	int source_array[MAX],dest_arr[MAX];
	int size,i;
	int *source_ptr	=source_array;
	int *dest_ptr=dest_arr;
	int *end_ptr;
	printf("enter the size of array <10\n");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	for(i=0;i<size;i++)
		scanf("%d",&source_ptr[i]/*(source_ptr+i)*/);
	end_ptr=&source_array[size-1];
	printf("source_array before coping\n");
	printArray(source_array,size);
	while(source_ptr <= end_ptr)
	{
		*dest_ptr=*source_ptr;
		source_ptr++;
		dest_ptr++;
	}
	printf("dest array :\n");
	printArray(dest_arr,size);
	return 0;
}
void printArray(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d ",*(arr+i));
}
