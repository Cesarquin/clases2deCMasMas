#include<iostream>
using namespace std;
main(){
	
	float i=1;	// valor inicio. (VI)
	float suma=0;
	while(i <= 10)		// condici�n fin. (CF)
	{
		suma += 1/i;
		i++;			// variaci�n de la variable. (VV)
	}
	cout << suma << endl;
}



