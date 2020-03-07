#include<stdio.h>
# define SI 10
void selection(int a[], int size);
void bubble(int a[], int size);
void insertion(int a[], int size);
void merge(int a[], int size);
void quick(int a[], int size);
void heap(int a[], int size);
void counting(int a[], int size);
void radix(int a[], int size);
void bucket(int a[], int size);
void shell(int a[], int size);
void tim(int a[], int size);
void comb(int a[], int size);
void pigeonhole(int a[], int size);
void cycle(int a[], int size);
void cocktail(int a[], int size);
void strand(int a[], int size);
void bitonic(int a[], int size);
void pancake(int a[], int size);
void binaryinsertion(int a[], int size);
void permutation(int a[], int size);

int a[SI],i,j,k,size,num,tem,sort,l,m,n,o,p,q,r,t,u,v,w,x,y,z;

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main(int argc, char *argv[])
{
printf("enter the size of array less than 10\n");
scanf("%d",&size);
for(i=0;i<size;i++)
{
printf("element at position %d : ",i);
scanf("%d",&a[i]);
}

printf("sorting technic \n");
scanf("%d",&sort);

switch(sort)
{
case 1:
	{	selection(a,size);
		break;
	}
case 2:
	{	bubble(a,size);
		break;
	}
case 3:
	{	insertion(a,size);
		break;
	}
case 4:
	{	merge(a,size);
		break;
	}
case 5:
	{	quick(a,size);
		break;
	}
case 6:
	{	heap(a,size);
		break;
	}
case 7:
	{	counting(a,size);
		break;
	}

case 8:
	{	radix(a,size);
		break;
	}

case 9:
	{	bucket(a,size);
		break;
	}

case 10:
	{	shell(a,size);
		break;
	}

case 11:
	{	tim(a,size);
		break;
	}

case 12:
	{	comb(a,size);
		break;
	}

case 13:
	{	pigeonhole(a,size);
		break;
	}

case 14:
	{	cycle(a,size);
		break;
	}

case 15:
	{	cocktail(a,size);
		break;
	}

case 16:
	{	strand(a,size);
		break;
	}

case 17:
	{	bitonic(a,size);
		break;
	}

case 18:
	{	pancake(a,size);
		break;
	}

case 19:
	{	binaryinsertion(a,size);
		break;
	}

case 20:
 	{	permutation(a,size);
		break;
	}


default:
	{printf("invalid input\n");break;}

}
return 0;
}//end of main

void selection(int a[], int size)
{
	for(i=0;i<size-2;i++)
	{
		min = i;
		for(j=i+1;j<size-1;j++)
			{
				if(a[j]<a[min])
				min=j;
			}

		swap(&a[min],&a[i]);
	}
}

void bubblesort(int a[], int size)
{
for(i=0;i<size-2;i++)
{	
	for(j=i+1;j<size-i-1;j++)
	{
		if(a[i]>a[i+1])
		{
			swap(&a[i],&a[i+1]);
		}
	}
}
}



	
		swap(&a[min],&a[i]);		
	}

