#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main() 
{
	int n,f;
	cout<<"Enter any number:";
	cin>>n;
	f=fact(n);
	cout<<"Factorial of "<<n<<" is "<<f;
	return 0;
}