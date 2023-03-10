// Arreglo en R3:
#include<iostream>
using namespace std;

main()
{
	int D[2][2][2] = { {{1,2},{3,4}}, {{5,6},{7,8}} };
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				cout<<D[i][j][k]<<endl;
			}
		}
	}
	
}

