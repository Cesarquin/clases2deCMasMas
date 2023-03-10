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
main()
{
	int nA;
	float A[10][10], B[10][10] ,C[10][10], P, cte, det=1;
	cout<<"Ingrese tamanio de la matriz: "<<endl;
	cin>>nA;
// Ingreso de datos:
	cout<<"Ingrese matriz A:"<<endl;
	leermatriz(A, nA, nA);
// Matriz triangular superior:
	for(int i=0;i<nA;i++)
	{
		P=A[i][i];
		for(int j=i+1;j<nA;j++)
		{
			cte=A[j][i];
			for(int k=0;k<nA;k++)
			{
				A[j][k] = A[j][k]-cte*A[i][k]/P;
			}
			
		}
	}
// Visualización matriz:
	cout<<"A = "<<endl;
	vermatriz(A, nA, nA);
// Observar el determinante:
	for(int i=0;i<nA;i++)
		det *= A[i][i];
	cout<<"El determinante = "<<det<<endl;
}
