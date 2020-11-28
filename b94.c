#include<stdio.h>
int main()
{
 int i;
 for(i=0;i<100;i++) // bai94(so le < 100  tru so 5,7,93)
  {if(i%2==1)
    {if(i==5||i==7||i==93){continue;
	}
	printf("%d ",i);
	
	} }	
	return 0;
}
