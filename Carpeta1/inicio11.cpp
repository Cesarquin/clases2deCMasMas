// SWITCH - CASE.
/*
switch (variable)
{
	case valor1:
		sentencia, c�digo cuando variable = valor1
	case valor2:
		sentencia, c�digo cuando variable = valor2
	case 
		...
	default:
		sentencia por defecto
}
*/
#include<iostream>
using namespace std;
main(){
	/*
	1: Nota muy mala
	2: Nota mala
	3: Debe esforzarse
	4: apenas est� pasando
	5: Siga as�  */
	int nota;
	cout<<"Digite la nota del estudiante:"<<endl;
	cin>> nota;
	switch (nota)
	{
		case 1:
			cout<<"Nota muy mala"<<endl;
			break;
		case 2:
			cout<<"Nota mala"<<endl;
			break;
		case 3:
			cout<<"Debe esforzarse"<<endl;
			break;
		case 4:
			cout<<"apenas esta pasando"<<endl;
			break;
		case 5:
			cout<<"Siga asi"<<endl;
			break;
		default:
			cout<<"Nota fuera de rango."<<endl;
	}	
}







