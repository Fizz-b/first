#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
  	int i,j,sum;
 int a[9]={2,51,436,155,52,42,-532,52,5};
 int n=sizeof(a)/sizeof(a[0]);
 for(i=0;i<9;i++)
 { 
 	sum+=a[i];
	printf("%d ",a[i]);
 }

 printf("\nSum:%d\n",sum);
 return 0;
	
}
