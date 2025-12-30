#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data) : data(data){}; 
    
};

void print1(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void print2(Node* head){
    if (head==nullptr)
    {
        cout<<"\n";
        return;
    }
    cout<<head->data<<" ";
    print2(head->next);
    
}
int main() {
    // Create 4 objects and set data
    Node* node1 = new Node(6);
    Node* node2 = new Node(10);
    Node* node3 = new Node(22);
    Node* node4 = new Node(76);

    // Set 4 links
    node1->next = node2;    
    node2->next = node3;  
    node3->next = node4;  
    node4->next = nullptr;  

    // Print the linked list
    print1(node1);
    //print in a recursive way
    print2(node1);


    // Clean up memory
    // Node* current = node1;
    // while (current != nullptr) {
    //     Node* temp = current;
    //     current = current->next;
    //     delete temp;
    // }

    return 0;
}
