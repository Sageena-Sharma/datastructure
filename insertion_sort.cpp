#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main()
{
    int a[100],n,i,size,m;
    cout<<"enter no. of elements:";
    cin>>n;
   // n= sizeof (a)/sizeof (a[0]);
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
   // n= sizeof (a)/sizeof (a[0]);
    cout<<"unsorted array:"<<endl;
    for(i=0;i<n;i++)
     {
        cout<<a[i]<<endl;
     }
     insertionsort(a,n);
     cout<<"sorted array:"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<a[i]<<endl;
     }
     return 0;
}