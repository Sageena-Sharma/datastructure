# include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *list;
};
struct node *del_first(struct node *head)
{
    if(head = null)
    {
        cout<<"list is empty ";
    }
    else{
        struct node *temp;
        head = head->list;
        free(temp);
        temp=null;
    }
    return head;
};

int main()
{
   head=del_first(head);
   ptr=head;
   while (ptr!=null)
   {
    cout<<ptr->data;
    ptr=ptr->link;
   }
   return 0;
}
