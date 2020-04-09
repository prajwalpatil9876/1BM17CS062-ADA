#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{ 
    int arr[1000];
    int n,i, j, min, temp ;
    int max=0;
    
    clock_t start, end;
     double cpu_time_used;
	
    printf("Enter the size of array:");
    scanf("%d",&n);
    
       printf("Enter the Distinct Elements:\n");
       for(i=0;i<n;i++)
         scanf("%d",&arr[i]);


	
	start = clock();	
    
    
     for (i = 0; i < n-1; i++) 
    { 
     
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min]) 
            min = j; 
  
       //swap
       temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp;
        
    } 
    
    for(i=0;i<n;i++)
    {
       if(max<arr[i])
         max=arr[i];
    }


         end = clock();
          
    printf("Sorted array: \n"); 
    for (i=0; i < n; i++) 
        printf("%d ", arr[i]); 
        
    printf("\n The Largest Element is:%d\n",max); 
    
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("The time taken to sort elements and to find largest element is : %f\n",cpu_time_used);
	
    return 0; 
} 
