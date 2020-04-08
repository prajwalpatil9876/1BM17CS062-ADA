#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generate_random(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	a[i]=rand()%100;
}
void main()
{
	int a[100000],n,i,j,temp;
	clock_t start, end;
     double cpu_time_used;
	
	printf("\n Enter size of array:- ");
	scanf("%d",&n);
 

	generate_random(a,n); 

	printf("\n The random array: ");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
		
start = clock();
 
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{

			if(a[j+1]<a[j]) 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}
 end = clock();
 	
	printf("\n The sorted array: ");
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);
	printf("\n \n");
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("The time taken to sort elements is : %f\n",cpu_time_used);

}
