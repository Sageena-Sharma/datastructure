#include<iostream>
using namespace std;
int main()
{
    string str;
    bool flag = true;
    cout<<"Enter the string: ";
    cin>>str;
    //getline(cin , str);
    cout<<"String is "<<str<<endl;
    int l = str.length();
    cout<<"Length of str is :"<<l<<endl;
    //cout<<"str[0] is " <<str[0]<<"and str[l] is "<<str[l-1];
    
    
    for(int i = 0 , j = l-1; i<= l/2 , j>=2; i++ ,j--)
    {
        // cout<<"Str["<<i<<"] is "<<str[i]<<endl;
        // cout<<"Str["<<j<<"] is "<<str[j]<<endl;
        // cout<<" ----------"<<endl;
        if(str[i] != str[j])
        {
            cout<<"Not a paladrone:";
            flag = 0;
            break;
        }   
    }
    if(flag == 1)
    {
    cout<<str<<" is a paladrone string.";
    }
}