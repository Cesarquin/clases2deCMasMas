#include<iostream>
#include<math.h>
# define f(x) cos(3*x) - 2*x

using namespace std;

main(){
	
	for(double x=0.0; x<=3.3; x+=0.3)
	{
		cout<< x << "\t" << f(x) <<endl;
	}
	
	
}


