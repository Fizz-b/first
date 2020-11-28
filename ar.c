#include<stdio.h>
void check(int a[],int size) // ktra chan < 2004
{int flag,i;
	for(i=0;i<size;i++)
	{if(i%2==0&&i<2024)
	 flag=1;
	}
	flag=0? printf("not exist"):printf("exit");
}
int is_prime(n)
{
	int i,flag=0;
	for(i=0;i<=n/2;i++)
	{if(n%i==0)
	 {
	 flag=1;
	 break;}
	}
	if(flag ==0){
	 return 1; }
	 else return 0;
}
int count_prime(int a[],int size) //dem so nguyen to
{ int i,count=0;
 for(i=0;i<size;i++)
 {if(is_prime(a[i])==1 && a[i]<100)
   {
   count+=1; }
 }
 return count;
void swap(int *a,int *b)
{int temp=*a;
*a=*b;
*b=temp;
}
}
int main()
{
 // 122 ->127
 int i,j=0;
 int a[]={2,51,436,155,52,42,-532,52,5};
 int n=sizeof(a)/sizeof(a[0]);
 int min=0;
 check(a,n);
 for(i=0;i<n;i++)
 { if(a[i]<a[min]) //tim vi tri chua phan tu nho nhat
     {min =i;}
	  }
 printf("%d",min); 
 
 for(i=0;i<n-1;i++)
 {
 	for(j=i+1;j<n;j++)
 	{if(a[i]>a[j])
swap(&a[i],&a[j]);
	 }
 }
	return 0;

}
