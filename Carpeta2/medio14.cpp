// Arreglos multidimensionales. 
#include<iostream>
using namespace std;

main()
{
	int A[3][3] = { {2,4,5}, {5,7,8}, {9,3,1} };
	int B[3][3] = {0,0,0,0,0,0,0,0,0};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<A[i][j]<<" ";
			B[j][i]=A[i][j];
		}
		cout<<endl;
	}
	cout<<"\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

