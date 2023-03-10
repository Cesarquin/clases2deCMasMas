#include<iostream>
using namespace std;
main()
{
	int var;
	int *pun;
	
	pun=&var;
	*pun=99;
	cout<<"Direccion de var = "<<&var<<endl;
	cout<<"Contenido de pun = "<<pun<<endl;
	cout<<"Contenido de *pun = "<<*pun<<endl;
	cout<<"Contenido de var = "<<var<<endl;
}



