#include<stdio.h>
int sum_n_num(n)
{return (n*(n+1))/2;
}
int main()
{
 int n;
  printf("Nhap n:");scanf("%d",&n);
  int sum=sum_n_num(n);
  printf("The sum from 1 to %d is %d",n,sum);
	return 0;
}
