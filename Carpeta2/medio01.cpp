// FUNCIONES Y MODULOS.
#include<iostream>
using namespace std;
/*
tipo_dato ID_ó_nombreFUN(parámetro/s)
*/
int comparacion(int x,int y)     // Definición de la función: función(parámetro) 
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
	comparacion(x,y);   // Llamado de la función.
	cout << comparacion(x,y)<<endl;
	system("PAUSE");
}






