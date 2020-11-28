#include<stdio.h>
#include<math.h>
int sum(int a[],int size) //200
{
 int i,sum_a=0;
 for(i=0;i<size;i++)
{if(a[i]>0)
	sum_a=sum_a+a[i];
}
return sum_a;
}
// 202
int TimChuSoDauLe(int n)
{
	int donvi;
	n = abs(n);
	while(n >= 10)
	{
		donvi = n % 10;
		n /= 10;
	}
	if(n % 2 == 0)
	{
		return 0;
	}
	return 1;
}

int TinhTongCacSoChuSoDauLe(int a[], int n)
{
	int i;
	int Tong = 0;
	for( i = 0; i < n; i++)
	{
		if(TimChuSoDauLe(a[i]) == 1)
		{
			Tong += a[i];
		}
	}

	return Tong;}

//203
int chuso_chuc_5(int n)
{
 
 n = abs(n);
	n = n / 10;
	int hangchuc = n % 10;
	if(hangchuc == 5)
	{
		return 1;
	}
	return 0;}

int sum_5(int a[],int n)
{
	int i,sum;
	for(i=0;i<n;i++)
	{
		if(chuso_chuc_5(a[i])==1)
		 {
		 	sum+=a[i];
		 }
	}
	return sum;
}
int tongcuctri(int a[],int n)
{
	int i,sum;
	for(i=0;i<n;i++)
	{
		if(i==0&&a[i]!=a[i+1])
		 sum+=a[i];
		else if(i==n-1&&a[i]!=a[i-1])
         sum+=a[i];
        else if()
	}
}
 int main()
{
 
 int i,j;
 int a[9]={2,51,436,155,52,42,-532,52,5};
 int n=sizeof(a)/sizeof(a[0]);
 for(i=0;i<9;i++)
 {
 	printf("%d ",a[i]);
 }
 int tong = sum(a,9);
 printf("\nSum:%d\n",tong);
 
 int TongDauLe = TinhTongCacSoChuSoDauLe(a, n);
	printf("\nTong cac phan tu co chu so dau la le: %d", TongDauLe);
	
 printf("\nTong chu so chuc la 5:%d",sum_5(a,n));
 
 return 0;
}
