#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int a[],int n)
{
 int	max=a[0]; //134
	int i;
	for(i=1;i<n;i++)
 {if(a[i]>max)
 max=a[i];
 }
 return max;
}
int last_even(int a[],int n ) //136
{	int i,count=0;
	for(i=n-1;i>=0;i--)
	{if(a[i]%2==0)
	 
	 return a[i];
	 
	}
	 return -1;
	
}
int find_min_posi(int a[],int size) //137
{
	int i,vtnn=0;
	for(i=0;i<size;i++)
	{
	 if(a[i]<a[vtnn])
       vtnn=i; // tim vi tri thi xet vi tri =0 tim gia tri thi setup gia tri min     
	}
 return vtnn;	
}
//155
void large(int a[],int b[],int size,int x)
{
 int i,j;
 for(i=0;i<size;i++)
 {
 	b[i]=abs(x-a[i]);
	 }	
}

int max_n(int b[],int n)
{
 int i,max=b[0];
 
 for(i=1;i<n;i++)
 {
 	b[i] > max ? max=b[i] : max;  	
  }
  return max;
}
 

int main()
{
 
 int i,j;
 int a[]={2,51,436,155,52,42,-532,52,5};
 int n=sizeof(a)/sizeof(a[0]),b[n];
 for(i=0;i<n;i++)
 {
 	printf("%d ",a[i]);
 }
 //printf("\nmax: %d",max(a,n));
 /*printf("\n%d last even element.\n",last_even(a,n));
 printf("Min position element: %d",find_min_posi(a,n)); */
 /*
 large(a,b,n,-600);
 int max1=max_n(b,n);
 
 for ( i = 0; i < n; i++)
	{
		if (b[i] == max1)    
		{
			printf("\n%d\n", a[i]); // Ð?i chi?u qua m?ng a, in ph?n t? ? v? trí th? i th?a ÐK
		}}
 printf("So xa gia tri 100 nhat "); */
	pritnf("Edit something new");
<<<<<<< HEAD
	printf("no");
=======
	
>>>>>>> master
 return 0;

}
