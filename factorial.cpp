#include<iostream>
using namespace std;
int fact(int n)
{
    int m = 1;
    for(int i=1;i<=n;i++)
	{
		m=m*i;
	}
    
	return m;
}
int main()
{
	int n;
	cout<<"Enter a no: ";
	cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    return 0;
}