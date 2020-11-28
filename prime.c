#include<stdio.h>
int main()
{
 int i,n;
 scanf("%d",&n); //b94
 for( i=2;i<=n/2;i++)
 {(n%i==0) ? printf("N is not prime") : printf("N is prime"); break;
 
 }
	return 0;
}
