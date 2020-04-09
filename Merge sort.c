#include<stdio.h>
#include<conio.h>
void merge(int low,int mid,int high,int a[])
{
  int i=low,j=mid+1,c[20],k=low;
   while(i<=mid&&j<=high)
   {
     if(a[i]<a[j])
     { 
      c[k]=a[i];
      k++;
      i++;
     }  
     else
     {
      c[k]=a[j];
      k++;
      j++;
     }  
   }
  while(i<=mid)
  {
   c[k]=a[i];
   k++;
   i++;
   }
 while(j<=high)
 {
  c[k]=a[j];
  k++;
  j++;
 }
for(i=0;i<=high;i++)
a[i]=c[i];
}
void mergesort(int low,int high,int a[])
{
  if(low<high)
  {
   int mid=(int)(low+high)/2;
   mergesort(low,mid,a);
   mergesort(mid+1,high,a);
   merge(low,mid,high,a);
  }
}

void main()
{
 int n,a[10];
 printf("\nEnter array size:");
 scanf("%d",&n);
 printf("\nArray elements are:");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 mergesort(0,n-1,a);
 printf("\nSorted array:");
 for(int i=0;i<n;i++)
 printf("%d ",a[i]);
 return;
}
