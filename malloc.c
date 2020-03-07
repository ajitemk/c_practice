#include<stdio.h>
int main(void)
{
	int *p,n,i;
	printf("enter the number\n");

scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
if(p==NULL)
{printf("memory not available\n");exit(1);}
for(i=0;i<n;i++)
{
	printf("enter the entegers\n");
		scanf("%d",p+i);
}
for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
	return 0;
}
