#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};

class LinkedList{
    public:
        Node* head=NULL;
        void InsertAtHead(int data)
        {
            Node* n= new Node();
            n->data=data;
            n->next=NULL;
            if(head==NULL)
            {
                head=n;
            }
            else{
                n->next=head;
                head=n;
            }
        }


        void InsertAtEnd(int data)
        {
             Node* n= new Node();
            n->data=data;
            n->next=NULL;
            Node *tempHead=head;
            while(tempHead->next!=NULL)
            {
                tempHead=tempHead->next;
            }
            tempHead->next=n;
        }

        void DeleteFromHead()
        {
            if(head==NULL)
            {
                cout<<"List is empty"<<endl;
                return;
            }
            Node* temp =head;
            head=head->next;
            delete temp;
        }

        void DeleteFromEnd()
        {
            if(head==NULL)
            {
                cout<<"List is empty"<<endl;
                return;
            }
            if(head->next==NULL)
            {
                delete head;
                head=NULL;
                return;
            }
            Node* temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
        }

        void insetAtNthPosition(int data , int position){

            Node* n = new Node();
            n->data = data;
            Node* temp = head;

            while(position>0 && temp->next!=NULL)
            {
                temp = temp->next;
                position--;
            }
            n->next = temp->next;
            temp->next = n;

        }
        void deleteAtNthPosition(int position)
        {
            Node* temp = head;
        }

            

       
      
        void Display()
        {
            Node* temp= head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};

int main() {
    LinkedList list;
    list.InsertAtHead(1);
    list.InsertAtHead(2);
    list.InsertAtEnd(9);
    list.InsertAtEnd(8);
    list.InsertAtHead(3);
    list.InsertAtHead(9);
    list.InsertAtEnd(5);
    list.insetAtNthPosition(20,5);

 
    list.DeleteFromEnd();


    list.Display();
    
}