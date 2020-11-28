#include<stdio.h>

int main()
{
    int i,j,num;
    char ch='y';
    for(;ch!='n';)
    {if(ch=='y'){
    printf("Enter your number: ");
    scanf("%d",&num);
    
    for(i=2;i<=num;i++)
    {int flag =0;
     for(j=2;j<=i/2;j++)
      {if(i%j==0)
        
		flag=1;
        break;}
    if(flag==0){
    printf("%d ",i);}
    }
    printf("Continue or not(y/n): ");}
    ch=getchar();}
    return 0;
}
