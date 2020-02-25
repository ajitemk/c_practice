#include<stdio.h>
 
int main(int argc, char *argv[])
{
int a[50],b[50],c,d,i,t,e,n,x,f,g;
printf("enter the size of array not more than 5\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
	printf("position %d : ",i+1);
	scanf("%d",&a[i]);
}
for(i=0;i<n ;i++)
{
b[i]=a[n-i-1];
}
for(i=0;i<n;i++)
{printf("%d ",b[i]);
}
return 0;
}//end of main
