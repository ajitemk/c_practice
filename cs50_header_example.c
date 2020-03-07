#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(int argc ,char *argv[])
{
int score=GetInt("score1: ");
printf("score 1 : ");
for(int i=0 ;i<score;i++)
	{
		printf("#");
	}	
printf("\n");
}
