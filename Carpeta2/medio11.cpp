#include<iostream>
#include<math.h>
using namespace std;
double senonormal(double x)
{
	double termino=x, suma=x;
		for(int i=1;i<=10;i++)
	{
		termino *= (-x*x/((2*i)*(2*i+1)));
		suma += termino;
	}
	return suma;
}
main(){
	
	double x=3.0;
	cout<<"La libreria math.h:    \t"<<sin(x)<<endl;
	cout<<"Resultado del programa:\t"<<senonormal(x)<<endl;
}



