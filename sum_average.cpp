#include<iostream>
using namespace std;
int main()
{
    int arr[10] , i , sum = 0 , avg;
    cout<<"Populate the array with 10 elements: ";
    for( i = 0 ; i<10;i++)
    {
        cin>>arr[i];
    }
    for( i = 0 ; i<10;i++)
    {
        sum = sum + arr[i];
    }
    avg = sum/10;
    cout<<"Sum of elements is :"<<sum<<endl;
    cout<<"Average of all elements is :"<<avg<<endl;
    return 0;
}