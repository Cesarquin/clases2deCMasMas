#include<iostream>
#include<math.h>
#define max 24
using namespace std;
main(){
	int n, x;
	for(int i=1;i<=max;i++)
	{
		for(int j=1;j<=max;j++)
		{
			if((i*i+j*j<=(max-8)*(max-8)))
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


