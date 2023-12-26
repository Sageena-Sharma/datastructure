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
    cout<<"position to insert no:"<<endl;
    cin>>pos;
    if(pos>n)
    {
        cout<<"\n this is out of range";
    }
    else
    {
      cout<<"enter the elements to be inerted:"<<endl;
      cin>>no;
      for(i=n;i>=pos;i--)
      {
        a[i+1]=a[i];
      }
      a[pos]=no;
      n=n+1;
    }
    cout<<"new data in array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}