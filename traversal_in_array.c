#include<stdio.h>
void rot(int arr[],int n)
{
int x=arr[n-1] ,i;
for(i=n-1;i>0;i--)
{
arr[i]=arr[i-1];

} 
arr[0]=x;
}

int main(int argc, char *argv[])
{
 int arr[]={1,2,3,4,5};
int n,i;
n=sizeof(arr)/sizeof(arr[0]);

rot(arr,n);

for(i=0;i<=n;i++)
printf("%d \n",arr[i]);
return 0;
}//end of mainrr
