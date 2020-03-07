#include<stdio.h>>
int main(void)
{
	int i,*ptr;
	ptr=(int *)malloc(5*sizeof(int));
	if(ptr==NULL)
	exit(1);
	printf("enter 5 integers\n");
	for(i=0;i<5;i++)
		scanf("%d",ptr+i);
	ptr=(int *)realloc(ptr,9*sizeof(int));
	if(ptr == NULL)
		exit(1);
	printf("enter 4 more integers\n");
	for(i=5;i<9;i++)
		scanf("%d",ptr+i);
	for(i=0;i<9;i++)
		printf("%d",*(ptr+i));
	return  0;
}
