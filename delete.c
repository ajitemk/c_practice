#include<stdio.h>

int main(int argc , char *argv[])
{
int a[]={1,2,3,4,5,6,7};
int i,pos =4,s=6;
for(i=pos-1;i<=s;i++)
{
a[i]=a[i+1];
}
s--;
return 0;
}//end of main
