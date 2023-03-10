#include<iostream>
using namespace std;
template<class T>
T funci(T A, T B)
{
	if (A<B)
		return A;
	else
		return B;
}
main(){
	
	int x=86, y=9;
	cout<<funci(x,y)<<endl;
	float X=3.2, Y=2.8;
	cout<<funci(X,Y)<<endl;
	char z='r', w='s';
	cout<<funci(char(x),w)<<endl;	
}



