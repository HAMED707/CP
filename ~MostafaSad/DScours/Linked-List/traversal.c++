#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data) : data(data){}; 
    
};
class singlylinkedlist
{
private:
//{}: This is brace initialization, which is a form of value initialization
// in C++. When used with a pointer, it initializes the pointer to // nullptr...
    Node *head{};
    Node *tail{};
public:
void print(){// other way to print
    for (Node* cur =head;cur; cur=cur->next)
    {
        cout<<cur->data<<" ";
        }
            cout<<"\n";

}
    // void print(){
    //     //WE did not change the head itself 
    //     // if we did we will lose it ...
    //     Node* temp_head=head;
    //     while (temp_head!=nullptr)
    //     {
    //         cout<<temp_head->data<<" ";
    //         temp_head=temp_head->next;

    //     }
    //     cout<<endl;

        
    // }
    void insert_end(int value){

        Node* item =new Node(value);
        if (!head)
        {
            head=tail=item;
        }else{
            tail->next=item;
            tail=item;
        }
        
    }
   
    Node* get_nth(int n){

    int cnt=0;
    for (Node* cur =head ; cur; cur=cur->next)
    {
    if (++cnt==n)
         return cur;
    }
    return nullptr;

}

    int search(int value){
        int idx=0;
    for (Node* cur =head ; cur; cur=cur->next,idx++)
    {
    if (cur->data==value)
         return idx;
    }
    return -1;
    }
};






int main() {
    singlylinkedlist list;
    list.insert_end(6);
    list.insert_end(11);
    list.insert_end(76);
    list.insert_end(99);
    list.insert_end(56779);
   // list.print();

  cout<<endl;
  Node* nth=list.get_nth(2);
  cout<<"value = "<<nth->data<<endl;
  int  res=list.search(6);
  cout<<"index = "<<res<<endl;


    return 0;
}
