#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,key,i;
    cout<<"enter no.of elements in array:";
    cin>>n;
    cout<<"enter the elements in array are :";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"elements of array are:"<<endl;
     for (int i=0;i<n;i++)
     {
        cout<<arr[i]<<endl;
     }
     cout<<"enter value to be searched:"<<endl;
     cin>>key;
     for(int i=0;i<n;i++)
     {
        if (arr[i]==key)
        {
            cout<<key<<" "<<"is found at index"<<" "<<i;
            break;
        }
       // else{
        //    cout<<"not found";
      //  }
     }    
      if(i==n)
        {
            cout<<"not found";
        }   
     return 0;
}