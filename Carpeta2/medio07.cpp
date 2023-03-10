#include<iostream>
using namespace std;
int A; // Declaración de variable global. 
int func();
main(){
	A=3;
	cout<<"El valor de A en main: "<<A<<endl;
	cout<<func();
}
int func()
{
	A=5;
	cout<<"El valor de A en func: "<<A<<endl;	
	return A;
}


