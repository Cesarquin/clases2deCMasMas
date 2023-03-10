// Arreglos, listas o tablas.
#include<iostream>
using namespace std;
main()
{
	int vector[4] = {10,20,25,30}; 
	int Ene=1, Feb=2, Mar=3, Abr=4;
	int meses[4] = {Ene, Feb, Mar, Abr};
	
	float x[] = {1.0,40.0,3.14,2.71};
	
	char A = 'a';
	char B[] = {'a','b','c'}; //  B[0]='a'   B[2]='c'  B[3]="\0"
	char C[] = {'E','l',' ','p','r','o','f','e'}; // C[7]='e'   C[8]="\0"
	char D[] = {"El_profe"};
	char E[] = "El_profe";
	
	
	cout<<vector[0]<<" "<<vector[3]<<endl;
	
	cout<<meses[0]<<" "<<meses[3]<<endl;
	
	cout<<x[0]<<" "<<x[3]<<endl;
	
	cout<<B[0]<<" "<<B[2]<<endl;
	
	cout<<C[0]<<" "<<C[4]<<endl;
	
	cout<<D[0]<<" "<<D[4]<<endl;
	
	cout<<E[0]<<" "<<E[4]<<endl;
	
}




