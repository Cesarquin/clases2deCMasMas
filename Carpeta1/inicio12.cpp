// SWITCH - CASE (variable caracter)
#include<iostream>
using namespace std;
main(){
	/*
	F: Nota muy mala
	D: Nota mala
	C: Debe esforzarse
	B: apenas está pasando
	A: Siga así  */
	char nota;
	cout<<"Digite la nota del estudiante:"<<endl;
	cin>> nota;
	switch (nota)
	{
		case 'F':
			cout<<"Nota muy mala"<<endl;
			break;
		case 'D':
			cout<<"Nota mala"<<endl;
			break;
		case 'C':
			cout<<"Debe esforzarse"<<endl;
			break;
		case 'B':
			cout<<"apenas esta pasando"<<endl;
			break;
		case 'A':
			cout<<"Siga asi"<<endl;
			break;
		default:
			cout<<"Nota fuera de rango."<<endl;
	}	
}

