#include<stdio.h>
#include<stdlib.h> 
void findGrid(int n) 
{ 
	int i,j,k,l;
    int arr[n][n]; 
    int x = 0; 
    for (i = 0; i < n / 4; i++) 
	{ 
        for (j = 0; j < n / 4; j++) 
		{ 
            for (k = 0; k < 4; k++) 
			{ 
                for (l = 0; l < 4; l++) 
				{ 
                    arr[i * 4 + k][j * 4 + l] = x; 
                    x++; 
                } 
            } 
        } 
    }  
    for (i = 0; i < n; i++) 
	{ 
        for (j = 0; j < n; j++) 
		{ 
            printf("%d ",arr[i][j]); 
        } 
        printf("\n");
    } 
} 
void main() 
{ 
    int n;
	printf("Enyter the size of n:\n");
	scanf("%d",&n); 
    findGrid(n); 
    return; 
}
