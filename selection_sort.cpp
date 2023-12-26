#include<iostream>
using namespace std;
void selectionsort( int a[],int n)
{
   /* for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }*/
    for(int i=0;i<n-1;i++)
    {
        //int min;
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }    
}
int main()
{
    int a[100],n,i;
    cout<<"enter no. of elements:";
    cin>>n;
    //n=sizeof(a)/sizeof(a[0]);
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
    cout<<"before sorting:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    selectionsort(a,n);
   /*for(i=0;i<n-1;i++)
    {
        int min;
        if (min=i)
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[temp];
            a[min]=temp;
        }
    }*/
    cout<<"after sorting:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
   // selectionsort(a,n);
    return 0;

}