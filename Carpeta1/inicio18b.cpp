#include<iostream>
#include<math.h>
using namespace std;
main(){
	double a=1, b=1/sqrt(2), t=0.25, p=1, a1;
	for(int i=1;i<=10;i++)
	{
		a1 = (a+b)/2;
		b=sqrt(a*b);
		t=t-p*pow(a-a1,2);
		p=2*p;
		a=a1;
	}
	p=(pow(a+b,2))/(4*t);
	cout << p<<endl;
	printf("%2.16f",p);
}


