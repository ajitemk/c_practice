#include<stdio.h>
int main(int argc, char *argv[])
{
int a[10],i,sum=0,n;
float avg;
printf("enter 10 numbers\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
sum=sum+a[i];

printf("avg is %f\n",avg= (float)(sum)/10);
return 0;
}
