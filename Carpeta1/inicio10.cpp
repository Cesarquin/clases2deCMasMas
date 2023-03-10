#include<iostream>
using namespace std;
main(){
	
	float nota;
	cout<<"Digite la nota del estudiante:"<<endl;
	cin>> nota;
	/*if(nota < 3)
		cout<<"No pasa"<<endl;
	else
		cout<<"Pasa"<<endl;
		*/
	nota < 3 ?  cout<<"No pasa"<<endl
			:	cout<<"Pasa"<<endl;

	cout<<"Continua el programa.";
}



