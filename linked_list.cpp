#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node* head ;
void insert_at_begin(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    temp->next = head;
    head = temp;
}
void display()
{
     cout<<"Elements in linked list are:"<<endl;
    node* temp = head;
    while(temp!= NULL)
    {
       cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main() 
{
    head = NULL;
    int n;
    cout<<"How many elements do you want to insert: ";
    cin>>n;
    for(int i =0 ; i<n; i++)
    {
        int val;
        cout<<"Enter value of next element:";
        cin>>val;
        insert_at_begin(val);
        
    }
    display();
}