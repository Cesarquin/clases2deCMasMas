#include<iostream>
#define max 24
using namespace std;
main(){
	int n, x;
	for(int i=1;i<=max;i++)
	{
		for(int j=1;j<=max;j++)
		{
			if((i<max*0.2)||(i>max*0.8))
			{
				printf("*");
			}
			else if((j<max*0.2)||(j>max*0.8))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}	
}


