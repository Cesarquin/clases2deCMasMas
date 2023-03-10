#include<iostream>
using namespace std;
main(){
	int n=0, sum=0, x;
	cin >> x;
	for(int i=1;i<=10;i++)
	{
		sum = sum + n*x;
		n++;
	}
	cout<<sum;
}




