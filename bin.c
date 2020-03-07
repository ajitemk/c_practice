//this program convert decimal to binary in array
#include<stdio.h>
func(int num, int b)
{
int i=0,j,rem;
char a[20];
while(num>0)
{
rem=num/b;
printf("remainder is %d\n",rem);
num/=b;
printf("new number is is %d\n",num);
if(rem>9&&rem<16)
{
a[i++]=rem-10+'A';
printf("in if array is %c\n",a[i++]);

}
else
{
a[i++]=rem+'0';
printf("in else array is %c\n",a[i++]);
}
}
for(j=i-1;j>=0;j--)
{
printf("%c",a[j]);
}
}
 
int main(int argc, char *argv[])
{
int num,opt;
printf("enter deciman \n");
scanf("%d",&num);
printf("1:b,2:o,3:h	\n");
scanf("%d",&opt);
switch(opt)
{
case 1:
	printf("bin is : \n");
	func(num,2);
	break;


case 2:
	printf("oct is : \n");
	func(num,8);
	break;


case 3:
	printf("ex is : \n");
	func(num,16);
	break;
}
printf("\n");

return 0;
}//end of main
