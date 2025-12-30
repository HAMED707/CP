/*
FILO =firt in last out
complexity...
direct
constractor , destractor,display O(n)
rest off operators are O(1)
*/


#include <iostream>
#include <assert.h>

using namespace std;

class Stack
{
private:
    int size{};
    int top{};
    int *array{};
public:
    Stack(int size ):size(size) ,top(-1){
        array=new int[size]; //memo O(n)
    };
    
int isFull(){return top==size-1;}//in the industery we use exceptions...
int isEmpty(){return top==-1; /*this is retur true or falus*/}
void display(){
    for (int i = top; i >=0; --i)//i times O(n)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}

    // void push(int x){
    //     assert(!isFull());
    //     array[++top]=x;

    // }

    /*status return or status code ^down here \_\/_/ */
    bool push(int x){// ather way to push used in the indestery .
                        //Note: we give and return value in same time ...
        if (isFull())
        {
            return false;
        }
        array[++top]=x;
        return true;    

        
    }
    int pop(){
        assert(!isEmpty());
        return array[top--];
    }
    int peek(){
        assert(!isEmpty());
        return array[top];
    }
};




int main()
{
   Stack arr(5);
   arr.push(10);
   arr.push(77);
   arr.push(99);
   arr.push(44);
   arr.push(32);
   int peekk=arr.peek();
   cout<<peekk<<" "<<endl;
   arr.display();
   arr.pop();
   cout <<"after pop: "<<endl;
   arr.display();

    return 0;
}
