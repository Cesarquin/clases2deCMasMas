#include<iostream>
using namespace std;
long int funcy(int x)
{
	int A=0, B=1, C=2, aux;
	if (x<=2)
		return x;
	else{
		for(int i=3;i<=x;i++)
		{
			aux=A+3*B-C;
			A=B;
			B=C;
			C=aux;
		}
		return C;
	}
}
main(){
	int x;
	cout<<"Ingrese el valor de 'x': "<<endl;
	cin>>x;
	cout<<"El valor de funcy(x) = "<<funcy(x)<<endl;
}


