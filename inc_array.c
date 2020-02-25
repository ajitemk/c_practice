#include<stdio.h>
#define SIZE 100
int main(int argc , char *argv[])
{
int a[SIZE],b[SIZE],c[SIZE],freq[SIZE],i,j,k,n,found,t;
printf("how many numbers\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements %d\n",i+1);
scanf("%d",&a[i]);
}
for(i=0,k=0;i<n;i++)
{
	found =0;
	for(j=0;j<k;j++)
	{
		if(a[i]==b[j])
		{
		freq[j]++;
		found =1;
		break;
		}
	}

	if(found ==0)
	{
 	b[k]=a[i];
	freq[k++]=1;
	
	}
}
/////////////////////////////////////////
for(i=0;i<j-1;i++)
	for(j=i+1;j<k;j++)
		if(freq[i]<freq[j])
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
			t=freq[i];
			freq[i]=freq[j];
			freq[j]=t;
		}
for(i=0;i<k;i++)
	printf("\n%d\t%d\n",b[i],freq[i]);

return 0;
}//end of main
