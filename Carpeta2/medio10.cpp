#include<iostream>
using namespace std;
double coseno(double x)
{
	double termino=1, suma=1;
	for(int i=1;i<=10;i++)
	{
		termino=termino*(-x*x/((2*i-1)*(2*i)));
		suma=suma+termino;
	}
	return suma;
}

main(){
	
	double x;
	cout<<"Ingrese el valor de 'x'''"<<endl;
	cin>>x;
	cout<<endl;
	cout<<coseno(x)<<endl;
}



