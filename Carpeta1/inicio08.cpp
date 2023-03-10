// Ejemplo función IF:
#include<iostream>
using namespace std;
main(){
	int numero1, numero2;
	cout<<"Ingrese un numero:"<<endl;
	cin>> numero1;
	cout<<"Ingrese otro numero:"<<endl;
	cin>> numero2;
	if(numero1 == numero2)
		{
			if (numero1 + numero2 > 5)
			{
				cout<< "La suma de los dos numeros es: " << endl;
				cout<< numero1+numero2 << endl;
			}
		}
	else
		{
		cout<< "Los numeros no son iguales."<<endl;
		}
	// sigue con el código...
}


