#include<stdio.h>
int main(void)
{
	int a =5;
	int *pa;
	int **ppa;
	pa=&a;
	ppa=&pa;;
printf("address of a =  %u\n",&a);
printf("value of pa =,address of a = %u\n",pa);
printf("value of *pa = valueof a=%d \n",*pa);
printf("address of pa = %u \n",&pa);
printf("value of ppa =address of pa=%u\n",ppa);
printf("value of *ppa =value of pa= %u\n",*ppa);
printf("value of **ppa = value of a=%d\n",**ppa);
printf("address of ppa = %u\n",&ppa);
return 0;
}
