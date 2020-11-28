#include<stdio.h>
int main()
{
 int i,num,ans,flag,j;
 char ch;
// for(;ch!='n'||ch!='N';)
 
 
 
 scanf("%d",&num);
 for(i=2;i<=num;i++)
 {
 	flag=0;
 	for(j=2;j<=num/2;j++)
 	{
 		if(i%j==0)
 		{
 			flag=1;
		 }
		 
	}
	if(flag==0)printf("%d ",i);
	
	 }
 
// printf("Continue or not(y/n):");ch=getchar();

	return 0;
}
