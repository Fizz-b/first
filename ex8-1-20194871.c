#include<stdio.h>
int main()
{
	int start,end;
	int num1,num2,first=0;
	printf("SMART STRATEGY\n");
	do
	{printf("start:");
	 scanf("%d",&start);
	 printf("destination: ");
	 scanf("%d",&end);
	}while( start >=end || start < 0  || end <0);
	while(1)
	{if(first==0)
	 {
		do{
		 printf("P1. Choose a number : ");scanf("%d",&num1);
		 if (num1 >5)
                   {printf("<invalid-greater than 5>\n");}
				if(num1<=0)
				{printf("<invalid - so small>\n");}
		}while(num1<=0 ||num1>5);
		first++;
	 }
	else{
	 if(num2%2==0)
	  {
		do{
				printf("P1. Choose a number :");scanf("%d",&num1);
				if(num1%2==0)
				{if(num1>0 && num1<=5)
					{printf("<invalid - must be odd>\n");}
				 else if (num1 >5)
                   {printf("<invalid-greater than 5-must be odd>\n");}
				 else
				  {printf("<invalid - so small>\n");}
				}
				 else 
				  {
				  	if(num1<=0){printf("<invalid - so small>\n");}
				  	if(num1>5){printf("<invalid-greater than 5>\n");
					  }
				   } 
			}while(num1<=0 ||num1>5 || num1%2==0);}
		else
		{
			do{
				printf("P1. Choose a number : ");scanf("%d",&num1);
				if (num1 >5)
                   {printf("<invalid-greater than 5>\n");}
				if(num1<=0)
				{printf("<invalid - so small>\n");}
			}while(num1<=0 ||num1>5);
			
		}}
		start+=num1;
		printf("The value is %d\n",start);
		if(start>=end)
		{
			printf("P1 has won the game!Congratulation\n");
			break;
		}
		
			if(num1%2==0)
		{
			
		do{
				printf("P2 Choose a number : ");scanf("%d",&num2);
				if(num2%2==0)
				{if(num2>0 && num2<=5)
					{printf("<invalid - must be odd>\n");}
				 else if (num2 >5)
                   {printf("<invalid-greater than 5 - must be odd>\n");}
				 else
				  {printf("<invalid - so small>\n");}
				
				   }
				   else
				   {
				   	if(num2 >5){printf("<invalid-greater than 5>\n");}
				   	if(num2<=0){printf("<invalid - so small>\n");}
				   }
		
			}while(num2<=0 ||num2>5||num2%2==0);}
		else
		{
			do{
				printf("P2 Choose a number :");scanf("%d",&num2);
				if (num2 >5)
                   {printf("<invalid-greater than 5>\n");}
				if(num2<=0)
				{printf("<invalid - so small>\n");}
			}while(num2<=0 ||num2>5);
			
		}
		
		start+=num2;
		printf("The value is %d\n",start);
		if(start>=end)
		{
			printf("P2 has won the game!.Congratulation.");
			break;
		}
		
		
	}
	
	return 0;
}
