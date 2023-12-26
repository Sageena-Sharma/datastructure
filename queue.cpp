#include<iostream>
using namespace std;
int a[5],n = 5 ;
int front = -1 ,rear = -1;
void enqueue(int item)
{
    if(rear == n-1)
    {
        cout<<"Overflow occured"<<endl;
        return;
    }
    if(front == -1)
    {
        front = 0;
    }
    a[++rear] = item;
}
void dequeue()
{
    if(rear == -1)
    {
        cout<<"Underflow occured"<<endl;
    }
    else
    {
        cout<<"Deleted element is:"<<a[front]<<endl;
        if(front == rear)
        {
         front = rear = -1;
        }
        else
        {
         front++;
        }
    } 
}
void display()
{
 if(rear == -1)
    {
        cout<<"Empty queue"<<endl;
    }
    else
    {
        for(int i = front ; i<=rear; i ++)
      {
        cout<<a[i]<<endl;
      }
    }
   
}
int main() 
{
    int ch;
    cout<<"1 - To insert new element\n";
    cout<<"2 - To delete existing element\n";
    cout<<"3 - To display all the elements\n";
    cout<<"4- To exit\n";
    do
    {
     cout<<"Enter your choice:"<<endl;
     cin>>ch;
     switch(ch)
     {
        case 1:
            cout<<"Enter the value of element:"<<endl;
            int value;
            cin>>value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            cout<<"Elements in queue:"<<endl;
            display();
            break;
        case 4:
        cout<<"exiting"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
     }
    }
    while(ch!=4);
    
    return 0;
}