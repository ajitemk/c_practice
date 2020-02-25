#include<stdio.h>
void print_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
	printf("index %d : %d \n",i,a[i]);
}
void rot_right(int a[] ,int n)
{
int x=a[n-1],i;
for(i=n-1;i>0;i--)
a[i]=a[i-1];
a[0]=x;
}

void rot_left(int a[], int n)
{
int x=a[0],i;
for(i=0;i<n;i++)
a[i]=a[i+1];

a[n-1]=x;
}
void rot_by_input(int a[],int d, int n)
{
for(int i =0;i<d;i++)
	rot_left(a,n);
}

int main(int argc, char *argv[])
{
int a[]={1,2,3,4,5,6,7,8,9,10},n,i,temp,lr,rr,d;
n=sizeof(a)/sizeof(a[0]);
//printf("%d",n);
//rotate elements at right one by one
print_array(a,n);
rot_right(a,n);
printf("elements shifted to right\n");
print_array(a,n);
rot_left(a,n);
printf("elements shifted to left\n");
print_array(a,n);
printf("rotate elements by user defines and enter digit 1 or 2\n");
scanf("%d",&d);
rot_by_input(a,d,n);
print_array(a,n);



return 0;
}//end of main
