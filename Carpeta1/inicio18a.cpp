#include<iostream>
#include<math.h>
#define pi 3.141592654
using namespace std;
main(){
	
	double x;
	cout << "Ingrese el valor de x en grados, para hallar cos(x):\n"; 
	cin >> x;
	x=x*pi/180;
	cout << cos(x);
	
	
}


