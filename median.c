#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b [100],n1,n2,j=0,k=0,i=0,c[200],med;
printf("Print size of array1:");
scanf("%d",&n1);
printf("Print size of array2:");
scanf("%d",&n2);
printf("\nEnter sorted array1:");
for(int z=0;z<n1;z++)
scanf("%d",&a[z]);
printf("\nEnter sorted array2:");
for(int z=0;z<n2;z++)
scanf("%d",&b[z]);
while(i<n1&&j<n2)
{
if(a[i]<b[j])
  c[k++]=a[i++];
else
  c[k++]=b[j++];
}
while(i<n1)
c[k++]=a[i++];
while(j<n2)
c[k++]=b[j++];
med=(int)(n1+n2)/2;
printf("\nMedian of merged array is %d",c[med]);
return;
}
