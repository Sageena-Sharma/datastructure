#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,n;
    cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"elements of array are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}