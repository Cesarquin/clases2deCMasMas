#include<iostream>
int fila=1, colum=3;
char c='*';
using namespace std;
void asterisco()
{
	cin>>fila>>colum>>c;
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<colum;j++)
		{
			cout<<c;
		}
		cout<<endl;
	}	
}
main(){
	asterisco();
	cout<<endl;
	asterisco();
	cout<<"Ingrese fila, columna y caracter:"<<endl;
	asterisco();
}


