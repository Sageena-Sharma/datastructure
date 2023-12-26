#include<iostream>
using namespace std;

int main() {
	int a[3][3],b[3][3],c[3][3],i,j;
	
	cout<<"enter 1st matrix";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter 2nd matrix";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"sum of 3*3 matrices is ::\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}