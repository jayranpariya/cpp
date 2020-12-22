#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insetAtTail(node* &head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    if (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node* head)
{
    node* temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node* head=NULL;
    insetAtTail(head,10);
    insetAtTail(head,20);
    insetAtTail(head,30);
    insetAtTail(head,40);
    insetAtTail(head,50);
    print(head);
    

    return 0;
}