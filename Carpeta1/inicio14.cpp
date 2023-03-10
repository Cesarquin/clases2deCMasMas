#include<iostream>
using namespace std;
main(){
	
	float i=1;	// valor inicio. (VI)
	float suma=0;
	while(i <= 10)		// condición fin. (CF)
	{
		suma += 1/i;
		i++;			// variación de la variable. (VV)
	}
	cout << suma << endl;
}



