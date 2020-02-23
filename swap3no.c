/* swaping 3 number with temp variable */

#include<stdio.h>
int main(int argc, char *argv[])
{
int a,b,c,temp;
printf("enter 3 number : \n");
scanf("%d %d %d",&a,&b,&c);

printf("first no = %d \n second no  = %d\nthird no = %d \n",a,b,c);

temp=a;
a=b;
b=c;
c=temp;

printf("after swapinng\n");
printf("%d %d %d \n",a,b,c);
return 0;


}//end of main
