// FUNCIONES Y MODULOS.
#include<iostream>
using namespace std;
/*
tipo_dato ID_�_nombreFUN(par�metro/s)
*/
int comparacion(int x,int y)     // Definici�n de la funci�n: funci�n(par�metro) 
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}	
}
main(){
	int x, y;
	cout << "Ingrese dos valores: "<<endl;
	cin >> x >> y;
	comparacion(x,y);   // Llamado de la funci�n.
	cout << comparacion(x,y)<<endl;
	system("PAUSE");
}






