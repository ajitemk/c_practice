# include<stdio.h>
int main(int argc, char *argv[]){
/*
int i =0;
for(i=1;i<argc;i++)
{
printf("arg %d:%s\n",i,argv[i]);
}
char *states[]={"cal","abc"};
int num_State=2;
for(i=0;i<num_State;i++)
{
printf("state %d:%s\n",i,states[i]);
}
*/

//int i=0;
//go through each string arguments
//while(i<argc){
//printf("argv %d:%s",i,argv[i]);
//i++;
// dasdjsdjsdkjsakldjskljdksadkjsadjkasjdlaksjdkjaskldjkalsjdkajkjd
//}

int i=0;
	
if(argc ==1)
	printf("only one argument\n");
else if(argc < 1 && argc >	 4){
	printf("heres your argument\n");
	for(i=0;i<argc;i++)
		printf("%s",argv[i]);
printf("\n");
}
else 
printf("too many arguments");













return 0;
}//end of main
