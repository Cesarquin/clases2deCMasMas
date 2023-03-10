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
void mediageo(float a[], int n)
{
	int x=0;
	for(int i=0;i<n;i++)
		x += a[i]*a[i];
	cout<<sqrt(x)<<endl;
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
main()
{
    int n, x=0, k=0;
    int A[]={0};
    float a[]={};   
/*
//    scanf("%s",&a);
	for(int i=0;i<sizeof(a);i++)
	{
		if(a[i] == ',')
		{
			int l=0;
			for(int j=i-1;j<=x;j--)
			{
				A[k] += pow(10,l)*int(a[j]);
				l++;
			}
			k++;
			x = i+1;
		}
	}
*/
	cout<<"El tamanio del almacenamiento de a es: "<<sizeof(a)<<endl;
	n = sizeof(a)/sizeof(*a);
	cout<<"El tamanio del vector es:			  "<<n<<endl;
	cout<<"Los valores contenidos en a son: 	  "<<a<<endl;
    cout<<"La norma del vector a es: 			  "<<normavec(a, n)<<endl;
    
    
}
