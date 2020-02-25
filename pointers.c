# include<stdio.h>
int main(int argc, char *argv[])
{
printf("create two arrays we care about\n");
int ages[]={1,2,3,4,5};
char *names[]={"a","b","c","d","e"};
printf("get the size of ages\n");
int count = sizeof(ages)/sizeof(int);
printf("size of ages is %d \n",count);
int i =0;

printf("first way of using indexing\n");
for(i=0;i<count;i++)
{
printf("%s : %d \n",names[i],ages[i]);
}

printf("---------------------------\n");

printf("setup the pointer to start of the array\n");
int *cur_age=ages;
char **cur_name=names;
 printf("second way of using pointers\n");
for(i=0;i<count;i++);
{printf("%s : %d\n",*(cur_name+i),*(cur_age+i));
}
printf("----------------------------\n");

printf("3rd way of using pointers\n");
for(i=0;i<count;i++);
{printf("%s : %d\n",cur_name[i],cur_age[i]	);
}
printf("----------------------------\n");

printf("4th way of using pointers\n");
for(cur_name=names,cur_age=ages;(cur_age-ages)<count;cur_name++,cur_age++);
{printf("%s : %d\n",*cur_name,*cur_age	);
}
printf("----------------------------\n");

















return 0;
}//end of main
