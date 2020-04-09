#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char Text[100],Pattern[100];
int n,m,j,flag=0;
printf("\nEnter the text string:");
scanf("%s",Text);
printf("\nEnter the pattern string:");
scanf("%s",Pattern);
n=strlen(Text);
m=strlen(Pattern);
for(int i=0;i<=n-m;i++)
{
j=0;
while(j<m&&Text[i+j]==Pattern[j])
{
j++;
}
if(j==m)
{
flag=1;
printf("\nPattern is found at text at pos %d",i);
}
}
if(flag==0)
printf("\nPattern not found");
return;
}
