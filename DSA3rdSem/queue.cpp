#include <iostream>
using namespace std;

class Queue
{
public:
    int front = 0;
    int rear = 0;
    int a[6];

    int enqueue(int data)
    {
        if (rear == sizeof(a) / sizeof(a[0]))
        {
            cout << "Queue is full" << endl;
            return -1;
        }
        a[rear] = data;
        rear = rear + 1;
        return -1;
    }

    int dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl
            ;            return -1;
        }
        int data = a[front];
   
        front = front + 1;
        return data;
    }

    int peek()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return a[front];
    }
    void display()
    {
        for (int i = front; i < rear; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue queue;

    cout << "starting enqueue operation" << endl;
    queue.enqueue(10);
    queue.enqueue(11);
    queue.enqueue(12);
    queue.enqueue(13);
    cout << "Peeked: " << queue.peek() << endl;
    queue.enqueue(14);
    queue.enqueue(15);
    queue.display();
    queue.enqueue(16);

    cout << "starting dequeue operation" << endl;
    cout << "Dequeued: " << queue.dequeue() << endl;    
    cout << "Dequeued: " << queue.dequeue() << endl;
    cout<<"peeked: "<<queue.peek()<<endl;
    cout << "Dequeued: " << queue.dequeue() << endl;
    queue.display();
    cout << "Dequeued: " << queue.dequeue() << endl;
    cout << "Dequeued: " << queue.dequeue() << endl;
    queue.display();

    return 0;
}
