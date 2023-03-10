// OPERADORES Y OTRAS EXPRESIONES.
#include<iostream>
#include<cstdlib>
using namespace std;
main(){
	
	printf("\tOPERADORES DE ASIGNACION.\n");
	cout<<"variable (identificador) = valor "<<endl;
	printf("(=)\n(*=)\n(/=)\n(%=)\n(+=)\n(-=)\n");
	cout<<"Ejemplo:\n A = 4 ... A=A*3 (A*=3)  "<<endl;
	cout<<"\tOPERADORES ARITMETICOS"<<endl;
	printf("+\tSUMA\n-\tRESTA\n*\tMULTIPLICACION\n/\tDIVISION\n%\tRESIDUO\n");
	cout<<"Ejemplo:\n 10 / 4 = 2 con residuo: 10 % 4 = 2  "<<endl;
	cout<<" 20 / 6 = 3 con residuo: 20 % 6 = 2  "<<endl;
	printf("Jerarquia de operacion: izq->der ((), %, *, /, +|-)\n");
	cout<<"3 + 4 * (8 * (4 - (9 + 2) / 6)) = 99"<<endl;
	printf("\tOPERADORES INCREMENTALES.\n");
	cout<<"A = 0 ... A=A+1(A+=1)(A++)... A=A+1(A+=1)(A++)"<<endl;
	cout<<"A = 10 ... A=A-1(A-=1)(A--)... A=A-1(A-=1)(A--)"<<endl;
	printf("\tOPERADORES RELACIONALES.\n");
	cout<<"==  Ejemplo: A==4 (A es igual a cuatro?)"<<endl;
	cout<<"!=  Ejemplo: A!=4 (A NO es igual a cuatro?)"<<endl;
	cout<<">   Ejemplo: A>4 (A es mayor a cuatro?)"<<endl;
	cout<<"<   Ejemplo: A<4 (A es menor a cuatro?)"<<endl;
	cout<<">=  Ejemplo: A>=4 (A es mayor o igual a cuatro?)"<<endl;	
	cout<<"<=  Ejemplo: A<=4 (A es menor o igual a cuatro?)"<<endl;
	printf("\tOPERADORES LOGICOS.\n");
	cout<<"AND: &&"<<endl;
	cout<<"OR:  ||"<<endl;
	cout<<"NOT: ~ "<<endl;
	cout<<"XOR: ^  A=10 B=11 A^B=01"<<endl;
	cout<<"Ejemplo:\n A<4(falso)  (OR, AND, NOT)   B<10(falso) "<<endl;
	cout<<"En ejecucion:\n"<<endl;
	int A = 2, B = 3, C;
	C = A^B;
	cout<<"El resultado de A XOR B: "<< C <<endl;
}



