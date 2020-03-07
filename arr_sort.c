#include<stdio.h>

void sort(int a[],int size);

void bin_search(int a[], int size , int search_key);


int a[10],b[10];
int main(int argc, char **argv)
{
int i;
unsigned int search_key=0,size,temp;
printf("enter the size of array between 1 to 10\n");
scanf("%d",&size);

printf("enter the elements of array upto %d\n",size);
for(i=0;i<size;i++)

{
	printf("element at position %d : ",i);
	scanf("%d",&a[i]);
}

sort(a,size);
for(i=0;i<size;i++)
	b[i] = a[i];

for(i=0;i<size;i++)
	printf("b[i] is %d \n",b[i]);


printf("for binary search enter the element you want to search\n");
scanf("%d",&search_key);
printf("%d",search_key);
bin_search(b,size,search_key);


return 0;
}
void sort(int a[],int size)
{
int i,temp,j;

for(i=0;i<size-1;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(a[i] > a[j])
		{	
			temp =a[i];	
			a[i]=a[j];	
			a[j]=temp;
		}
		
	}
}
for(i=0;i<size;i++)
	printf("sorted array is %d \n",a[i]);
}

void bin_search(int b[], int size , int search_key)
{
int i,l=0,r=size-1,mid,temp;
	while(l<=r && search_key!=b[mid])
	{
	mid=l+((l+r)/2);
		if(search_key == b[mid])
		{
			printf("%d is found at %d positon \n",search_key,b[mid]);
		}
		else if(search_key>b[mid])/* 1 2 3 4 5 6 7 8 9 10 **/
		{			/*mid = 5, key =10 then */	
			l=mid+1;	/*low at mid + 1	*/
		}
		else if (search_key<b[mid])
		{
			r=mid-1;
		}
		
	}	

}



