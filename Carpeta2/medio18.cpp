#include<iostream>

using namespace std;

main()
{
	float A[10][10] = {{3,2},{1,2}};
	float B[10][10] = {{4,1},{5,0}};
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			{
				cout<<B[i][j]<<" ";
			}
		cout<<"\n";
	}	
	
}


