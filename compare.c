#include<stdio.h>
#include<string.h>
#include<stdlib.h>
_Bool compare_string(char *s ,char *t);
int main(void)
{
int i,j;
char *s;
char *t;
printf("enter the first name : \n");
scanf("%s",s);
if(s==NULL)
		return 1;
printf("enter the first name to compare : \n");
scanf("%s",t);
if(t==NULL)
		return 1;
if(strcmp(s,t)==0)
printf("same\n");
else
printf("different\n");
return 0;
}
_Bool compare_string(char *s, char *t)
{
	int n;
	if(strlen(s)!=strlen(t))
		return 0;
	for(int i=0,n=strlen(s);i<n;i++)
	{
	     if(s[i]!= t[i])
		return 0;
	
	}
	return 1;
}
