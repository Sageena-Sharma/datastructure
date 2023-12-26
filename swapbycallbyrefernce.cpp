#include<iostream>
using namespace std;
void swap_ref_cpp(int  &a , int &b)
{
    //cout<<"Using swap_refernce function "<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{ 
    int x,y;

    cout<<"enter two numbers : ";
    cin>>x>>y;
    //cout<<"call by refernce"<<endl;
    cout<<"value before entering in function "<<"a= "<<x<<" b= "<<y<<endl;
    swap_ref_cpp(x,y);
    cout<<"value at the end of function "<<"b= "<<x<<" a= "<<y<<endl;
    return 0;
}