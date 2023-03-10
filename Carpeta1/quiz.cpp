/*Quiz: Realizar un programa que lea tres
números enteros y emita un mensaje que 
indique si los números están en orden 
ascendente o no.*/
#include <iostream>
using namespace std;
main(){
int a,b,c;
cout<<"ingrese un valor para a,b,c"<<endl;
cin>> a;
cin>> b;
cin>> c;
if((a<b)&(b<c))
printf("los numeros son ascendentes\n");
else
printf("los numeros no son ascendentes");
}
