#include<iostream>
using namespace std;
main()
{
	int var=7;
	int& ref=var;
	cout<<"Variable (var) = "<<var<<endl;
	cout<<"Direccion &variable = "<<&var<<endl;
	cout<<"Referencia (ref) = "<<ref<<endl;
	cout<<"Direccion &ref = "<<&ref<<endl;
}

