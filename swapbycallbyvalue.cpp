#include<iostream>
using namespace std;
void swap_value(int a , int b)
{
    //cout<<"Using swap_value function"<<endl;
    cout<<"value before swapping in function "<<"a= "<<a<<" b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value after  swapping in function "<<"a= "<<a<<" b= "<<b<<endl;
}
int main()
{ 
    int x,y;

    cout<<"enter two numbers :";
    cin>>x>>y;// taking input
    
    //cout<<"call by value"<<endl;
    cout<<"value before entering in function "<<"a= "<<x<<" b= "<<y<<endl;
    swap_value(x,y);
    cout<<"value at the end of function "<<"a= "<<y<<" b= "<<x<<endl;

    return 0;
}