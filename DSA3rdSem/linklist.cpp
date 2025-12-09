#include <iostream>
	using namespace std;
	
	class Node {
	public:         
	    int data;    
	    Node* next;
	};
	
	class LinkedList {
	public:
	    Node* head = NULL;
	
	    void insertAtFirst(int data){
	        Node newNode;;
	        newNode.data = data;
	        newNode.next = nullptr;
	
	        if(head == NULL){
	            head = &newNode;   
	        } else {
	            newNode.next = head;  
	            head = &newNode;     
	        }
	    }
       
	};
    
	
	int main() {
	    LinkedList list;
	
	    list.insertAtFirst(10);
	    list.insertAtFirst(20);
	    list.insertAtFirst(30);
	   
	
	
	    return 0;
	}