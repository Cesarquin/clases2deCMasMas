#include<iostream>
using namespace std;
int promedio(int Z, int X);
main(){
	int Z=20; // Declaración de variable local.
	printf("Z antes del llamado a la funcion: %i\n",Z);
	printf("Lo que entrega la funcion: %i\n",promedio(Z,3.14));
	printf("Z despues del llamado a la funcion: %i\n",Z);
	
}
int promedio(int Z, int X)
{
	Z = Z*X;
	printf("El valor de Z dentro de la func: %i\n",Z);
	return Z;	
}



