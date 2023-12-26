#include<iostream>
using namespace std;
int main()
{
    int a[20],no,pos,n,i;
    cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements of array are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"enter position to delete an element:";
    cin>>pos;
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    cout<<"new array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}        