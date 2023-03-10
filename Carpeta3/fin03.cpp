#include<iostream>
using namespace std;
float leermatriz(float A[][10], int n, int m=3)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>A[i][j];
	}
}
float vermatriz(float A[][10], int n, int m=3)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
}
float sumamatrices(float A[][10], float B[][10], float C[][10], int n, int m=3)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			C[i][j] = A[i][j]+B[i][j];
		}
	}
}
main()
{
	int n;
	float A[10][10], B[10][10], C[10][10]={0};
	cout<<"Ingrese n: "<<endl;
	cin>>n;
	cout<<"Ingrese A:"<<endl;
// Ingreso de datos.
	leermatriz(A, n);
	leermatriz(B, n);
// visualización:
	vermatriz(A, n);
	vermatriz(B, n);
// Suma.
	sumamatrices(A, B, C, n);
	vermatriz(C, n);
}


