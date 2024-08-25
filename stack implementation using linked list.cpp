#include <iostream>
using namespace std;
   struct Node
   {
    int val;
    Node *next;
   };
   public:
   Class Stack()
   {
    head=NULL;
    stacksiza=0;
   }


    void push (int g)
    {
        Node *temp=new Node();
        temp->val=g;
        temp->next=head;
        head=temp;

        cout<<"Element"<<g<<"Pushed in the stack"<<endl;

    }
    void pop()
    {
        if(head==NULL)
        {
          cout<< "Stack is empty!Cannot pop an element." <<endl;
        }
        else 
        {
         Node* temp=head;
         head=temp->next;
         temp->next=NULL;
         delete temp;
        }
    }

int main() 
{
Stack s1;
s1.push(10);
s1.push(4);
s1.pop();
s1.push(7);
return 0;
}