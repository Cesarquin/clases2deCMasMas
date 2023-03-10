#include<iostream>
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
void mediageo(float a[], int n)
{
	int x=0;
	for(int i=0;i<n;i++)
		x += a[i]*a[i];
	cout<<sqrt(x)<<endl;
}
main()
{
	int n=3;
	float a[10];
	cin>>n;
	funleer(a,n);
	mostrar(a,n);
	mostrar(a,2);
	mostrar(a,2);
	mediageo(a,n);
	
}

