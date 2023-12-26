#include <iostream>
using namespace std;

    //int i,n;
    int a[]= {43, 65, 87, 23, 66, 12};
    /*cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements of array are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }*/
    int b[6]; // Declare an array 'b' to store the merged values

void merge(int low, int mid, int high) {
    int h = low;
    int i = high;
    int j = mid + 1;
    int a[100];
    int b[100];

    while ((h <= mid) && (j <= high)) 
    {
        if ( a[h] <=  a[j])
        {
            b[i] = a[h];
            h++;
        } 
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }

    if (h > mid)
     {
        for (int k = j; k <= high; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
     else 
    {
        for (int k = h; k <= mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for (int k = low; k <= high; k++)
    {
        a[k] = b[k];
    }
}

void printarray(int a[], int n)
{
    //cout <<"printing array:" << endl;
    for (int k = 0; k < n; k++)
    {
        cout << a[k] <<endl;
    }
    cout << endl;
} 

void mergesort(int low, int high) 
{
    if (low < high) 
    {
        int mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main() 
{
   // int r,n,a[100],b[100];
    /*cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    for(int r=0;r<n;r++)
    {
        cin>>a[r];
    }
    cout<<"elements of array are:"<<endl;
    for(r=0;r<n;r++)
    {
        cout<<a[r]<<endl;
    }*/
    //cout <<"array is:"<< endl;
    cout<<"before sorting:"<<endl;
    printarray(a,6);
   /*for(r=0;r<n;r++)
    {
        cout<<a[r]<<endl;
    }*/
    mergesort(0,5); // The 'high' parameter should be one less than the size of the array
    cout << "after sorting: " << endl;
    printarray(a,6);
    /*for(r=0;r<n;r++)
    {
        cout<<a[r]<<endl;
    }*/
    return 0;
}