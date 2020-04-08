#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void BubbleSort(int A[],int n)
{
	int i,j,flag=0;
	int temp;
	for( i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
			    flag=1;
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
		if(flag==0)
		break;
	}
	
}
void main()
{
  int arr[100],n;
  clock_t start,end;
  double timer;
  
 printf("Enter array size");
 scanf("%d",&n);
 printf("\nenter array element");
 
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
  }
  
  start=clock();
BubbleSort(arr,n);
 end=clock();
 timer=((double)(end-start))/CLOCKS_PER_SEC;
printf("\nSorted Array Using Bubble Sort is : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\ntime= %f",timer);
	
	return;
}
