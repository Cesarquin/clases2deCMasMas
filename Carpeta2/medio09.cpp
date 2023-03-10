#include<iostream>
#include<math.h>
using namespace std;
double expon(int x)
{
	double acum=1.0, term=1.0;
	for(int i=1;i<=20;i++)
	{
		term=term*x/i;
		acum=acum+term;
	}
	return acum;
}
main(){
	
	cout<<exp(2)<<endl;
	cout<<"Funcion creada: "<<endl;
	cout<<expon(2)<<endl;
}


