/*
FIFO =first in fisrt out
complexity...
direct
constractor , destractor,display O(n)
rest off operators are O(1)
*/


#include <iostream>
#include <assert.h>

using namespace std;

class queuecircular
{
private:
    int rear{};
    int front{};
    int *array{};
    int size{};
    int added_element{};
public:
    queuecircular(int size):size(size){
        array=new int[size];
    };

    // next func is the new 
    int next(int pos){
       // return (pos+1)%size;
        pos++;
        if (pos==size)
        {
            pos=0;
            
        }
        return pos;
    }

int isFull(){return added_element==size;}//in the industery we use exceptions...
int isEmpty(){return added_element==0; /*this is retur true or falus*/}

    void enqueue(int x){
        assert(!isFull());
        array[rear]=x;
        rear=next(rear);
        added_element++;
    }
    int dequeue(){
        assert(!isEmpty());
        int val=array[front];
        front=next(front);
        --added_element;
        return val; 
    }
    
    void display(){

cout<<front<<"--<--->--"<<rear<<endl;

if (isEmpty())
{
    cout<<"Empty\n";return;
    
    // Early exit if queue is full !important... it is empty
}else if (isFull())
{
    cout<<"Full\n\n\n";
    
}

    for (int cur = front ,step=0; step < added_element; ++step,cur=next(cur)  )
    {
        cout<<array[cur]<<" ";
    }
    cout<<endl;
    
}
    
};


int main()
{
    queuecircular que(5);
    que.enqueue(1);
    que.enqueue(2);
    que.enqueue(3);
    que.enqueue(4);

    que.enqueue(6);
        que.dequeue();
    que.dequeue();
    que.dequeue();
    que.dequeue();
    que.dequeue();

    
    
        que.display();
    

   
    return 0;
}
