#include<iostream>
#include<math.h>
using namespace std;


main()
{
	// vector=[i j k]  norma=raiz(i^2+j^2+k^2)
	int n=4, x=0;
	float a[10]={4,2,3,5};
	for(int i=0;i<n;i++)
		x += a[i]*a[i];
	cout<<sqrt(x)<<endl;
	
}


