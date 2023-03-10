#include<iostream>
using namespace std;
main(){
	int n, x;
	for(int i=1;i<=100;i++)
	{
		if(i%10==0)
		{
			cout<<"\n";
		}
		else if(i%4==0)
		{
			printf("%i\t",i);
		}
	}
}


