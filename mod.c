/* change by ajitem*/	
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
int n,lower_r,upper_r;

printf(“Enter a number: \n”);

scanf(“%d”,&n);

lower_r = n %10 * 10;
/*the arithmetic operators work
from left to right*/
upper_r = lower_r + 10;
printf(“Range is %d - %d”,lower_r,upper_r);

return 0 ;
}
