# include<iostream>
using namespace std;
void printarray(int a[],int n)
{
 cout<<" printing array:"<<endl;
 for(int k=0;k<n;k++)
 {
    cout<<a[k]<<endl;
 }
}
int main()
{
    int a[10],i,j,n;
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
    cout<<"before sorting:";
    printarray(a,n);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"after sorting:";
    printarray(a,n);
    return 0;

}
