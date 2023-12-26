#include<iostream>
using namespace std;
int main()
{
    int *a , *b , c , x , y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    //a = &x;
    //b = &y;
    //cin>>x;
    cin>>y;
    a = &x;
    b = &y;
    c = *a + *b;
    cout<<"Sum of "<<*a<<" and "<<*b<<" is "<<c;
    return 0;
}