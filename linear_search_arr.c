#include<stdio.h>
int main(int argc, char *argv[])
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int i,j,s,t;
s=sizeof(a)/sizeof(a[0]);
printf("%d\n enter the item to be search\n",s);
scanf("%d",&j);
for(i=0;i<s;i++)
{
	if(j==a[i])
	{	
	printf("%d : %d\n",j,i+1);
	break;	
	}
	if(i==s)
	{printf("not found\n");	}
}


return 0;
}
