#include <iostream>
using namespace std;
//#define max_size 10 
int a[10];
int top = - 1 ;
void push(int item)
{
    if(top == 10)
    {
        cout<<"overflow"<<endl;
    }
    a[++top] = item;
}
void pop() 
{
    if( top == -1)
    {
        cout<<"underflow"<<endl;
    }
    cout<<"Element deleted is: "<<a[top]<<endl;
    --top;
}
void Top( )
{
    if( top != -1 )
    {
        cout<<"Element at top is:"<<a[top]<<endl;
    }
    
}
void traverse()
{
    cout<<"The elements in stack are:"<<endl;
    for(int i= top ; i>=0; i--)
    {
        cout<<a[i]<<endl;
    }

}
int main() {
    // Write C++ code here
   cout<<"1- To insert a new element\n";
   cout<<"2- to delete an existing element\n";
   cout<<"3- to print all elements\n";
   cout<<"4- to print topmost element\n";
   cout<<"5 - exit \n";
   int ch;
   do
 {
   cout<<"Enter operation to be performed:"<<endl;
   cin>>ch;
   switch(ch) 
   {
     case 1 :
      cout<<"enter value"<<endl;
      int x ;
      cin>>x;
      push(x);
      break;
     case 2:
       pop();
       break;
     case 3:
       traverse();
       break;
     case 4:
       Top();
       break;
     case 5:
        cout<<"bye Thank you"<<endl;
        break;
     default :
       cout<<"invalid choice"<<endl;
      break;
   }
 }
   while(ch!=5);
    return 0;
}
