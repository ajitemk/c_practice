#include<stdio.h>
# define SIZE 20
int main(int argc, char *argv[])
{
/*int a[SIZE]={1,2,3,4,5};
int pos= 3;
int element=10;
a[pos]=element;
for(int i=0;i<5;i++)
printf("%d\n",a[i]);*/

int a[SIZE],pos,value,i,n;
printf("enter the size of array\n");
scanf("%d",&n);

printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
printf("elements at position %d : ",i);
scanf("%d",&a[i]);
}

printf("enter the position at which you want to insert element\n");
scanf("%d",&pos);

printf("enter the value\n");
scanf("%d",&value);

a[pos]=value;


printf("new array after insertion is :" );
for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
}//end of main
