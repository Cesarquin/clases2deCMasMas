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
float multimatriz(float A[][10], float B[][10], float C[][10], int nA, int mAnB, int mB)
{
	for(int i=0;i<nA;i++)
	{
		for(int j=0;j<mB;j++)
		{
			for(int k=0;k<mAnB;k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}	
}
main()
{
	int nA, mAnB, mB;
	float A[10][10], B[10][10] ,C[10][10];
	cout<<"Ingrese numero de filas de la primera matriz: "<<endl;
	cin>>nA;
	cout<<"Ingrese numero de columnas de la primera matriz: "<<endl;
	cin>>mAnB;
// Ingreso de datos.
	cout<<"Ingrese matriz A:"<<endl;
	leermatriz(A, nA, mAnB);
	cout<<"Ingrese numero de columnas de la segunda matriz: "<<endl;
	cin>>mB;
	cout<<"Ingrese matriz B:"<<endl;
	leermatriz(B, mAnB, mB);
// visualización:
	cout<<"A = "<<endl;
	vermatriz(A, nA, mAnB);
	cout<<"B = "<<endl;
	vermatriz(B, mAnB, mB);
// Multiplicación de matrices.
	multimatriz(A, B, C, nA, mAnB, mB);
// Ver resultado:
	vermatriz(C, nA, mB);
	
}


