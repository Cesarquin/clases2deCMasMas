// if - else anidado
#include<iostream>
using namespace std;
main(){
	/*
	0 - 1: Nota muy mala
	1 - 2: Nota mala
	2 - 3: Debe esforzarse
	3 - 4: apenas está pasando
	4 - 5: Siga así  */
	float nota;
	cout<<"Digite la nota del estudiante:"<<endl;
	cin>> nota;
	if((nota > 0) & (nota <= 1))
	{
		cout<<"Nota muy mala"<<endl;
	}
	else if(nota > 1 & nota <= 2)
	{
		cout<<"Nota mala"<<endl;
	}
	else if(nota > 2 & nota <= 3)
	{
		cout<<"Debe esforzarse"<<endl;
	}
	else if(nota > 3 & nota <= 4)
	{
		cout<<"apenas esta pasando"<<endl;
	}
	else if(nota > 4 & nota <= 5)
	{
		cout<<"Siga asi"<<endl;
	}
	else 
	{
		cout<<"Nota fuera de rango."<<endl;
	}
	
	
	
}








