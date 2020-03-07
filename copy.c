#include<string.h>
#include<string.h>

int main(void)
{
char *s="";
char *t="";
printf("enter the string\n");
scanf("%s",s);
if(!s)
		return 1;
t=s;
if(strlen(t)>0)
{
	t[0]=toupper(t[0]);
}
printf("s :%s\n",s);
printf("t :%s\n",t);
return 0;

}//end of main
