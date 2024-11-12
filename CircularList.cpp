#include <iostream>
using namespace std;


class Node {
public:
    int data;      
    Node* next;    

    
    Node(int value) {
        this->data = value;
        this->next = nullptr;
    }
};


class CircularLinkedList {
private:
    Node* last;    

public:
    
    CircularLinkedList() {
        last = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);  

        if (last == nullptr) {        
            newNode->next = newNode;  
            last = newNode;           
        } else {                      
            newNode->next = last->next; 
            last->next = newNode;      
            last = newNode;             
        }
        cout << "Inserted "<<val<<endl;
    }

    
    void remove(int x) {
        if (last == nullptr) { 
            cout << "List is empty. Cannot remove " << x <<endl;
            return;
        }

        Node* curr = last->next; 
        Node* prev = last;      

        
        do {
            if (curr->data == x) { 
                if (curr == last && curr->next == last) { 
                    last = nullptr; 
                } else if (curr == last) {
                    prev->next = curr->next; 
                    last = prev;            
                } else { 
                    prev->next = curr->next; 
                }
                delete curr; 
                cout << "Removed " << x << " from the list.\n";
                return;
            }
            prev = curr;       
            curr = curr->next;
        } while (curr != last->next); 

        cout << "Element " << x << " not found in the list.\n";
    }

    
    Node* search(int x) {
        if (last == nullptr) { 
            cout << "List is empty.\n";
            return nullptr;
        }

        Node* curr = last->next; 

        
        do {
            if (curr->data == x) {
                cout << "Element " << x << " found in the list.\n";
                return curr;
            }
            curr = curr->next; 
        } while (curr != last->next);

        cout << "Element " << x << " not found in the list.\n";
        return nullptr; 
    }

    
    void display() {
        if (last == nullptr) { 
            cout << "List is empty.\n";
            return;
        }

        Node* curr = last->next; 
        cout << "List elements: ";

     
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != last->next); 

        cout << endl;
    }
};

int main() {
    CircularLinkedList list;

    
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    
    list.display();

   
    list.search(20);
    list.search(50); 

   
    list.remove(20);
    list.remove(50); 

   
    list.display();

    return 0;
}
