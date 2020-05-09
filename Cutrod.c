#include<stdio.h>
#include<stdlib.h>
int max(int a, int b) { return (a > b) ? a : b; }
int cutRod(int price[], int n) 
{ 
int i;
    if (n <= 0) 
        return 0; 
    int max_val = INT_MIN; 
    for (i = 0; i < n; i++) 
        max_val = max(max_val, price[i] + cutRod(price, n - i - 1)); 
      return max_val; 
} 
int main()
{
	int i;
	int n;
	printf("Enter the length of the rod\n");
	scanf("%d",&n);
	int arr[n];
	int size = sizeof(arr) / sizeof(arr[0]); 
	printf("Enter the price of each piece\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Maximum Obtainable Value is %d", cutRod(arr,size)); 
	return 0;
}
