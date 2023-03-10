#include <iostream>
#include<math.h>
using namespace std;
void funleer(float a[], int n=3)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor de la posicion "<<i<<": ";
		cin>>a[i];
	}	
}
void mostrar(float a[], int n=3)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
}
float normavec(float a[], int n=3)
{
	float x =0.0;
    for(int i=0;i<n;i++)
    {
        x=x+a[i]*a[i];
    }
	return sqrt(x);
}
float pe(float a[], float b[], int n)
{
	float acu=0.0;
	for(int i=0;i<n;i++)
	{
		acu = acu + a[i]*b[i];
	}
	return acu;
}
float cosenang(float a[], float b[], int n)
{
	float aux;
	aux = pe(a, b, n)/(normavec(a, n)*normavec(b, n));
	return aux;
}
main()
{
    int n;
    float a[10], b[10];
    cout<<"A continuacion, ingrese el tamanio de los vectores: "<<endl;
    cin>>n;
    cout<<"A continuacion, ingrese los valores del vector: "<<endl;
    funleer(a,n);
    funleer(b,n);
    cout<<"La norma del vector a es:"<<normavec(a, n)<<endl;
    cout<<"La norma del vector b es:"<<normavec(b, n)<<endl;
	cout<<"El producto escalar es: "<<pe(a, b, n)<<endl;
    cout<<"El coseno entre angulos es: "<<cosenang(a, b, n)<<endl;
    
}
