#include<iostream>
using namespace std;
int A; // Declaración de variable global. 
int func();
main(){
	A=3;
	printf("El valor de A en main: %i\n",A);
	
	func();
	
}
int func()
{
	A=5;
	printf("El valor de A en func: %i\n",A);
	
}

