#include<iostream>
#include<math.h>
using namespace std;
float magnitud(float x, float y, float z);
main(){
	
	float x, y, z, w;
	printf("Ingrese los valores del vector x, y, z:\n");
	scanf("%f%f%f",&x,&y,&z); // cin
	
	w=magnitud(x,y,z);
	cout << "La magnitud del vector es:\n";
	cout << w << endl;
}
float magnitud(float x, float y, float z)
{
	return sqrt(x*x+y*y+z*z);
}



