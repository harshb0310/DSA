#include<bits/stdc++.h>

using namespace std;

class Queue
{
    int front, rear, n;
    int* arr;
    public:
    Queue()
    {
        n = 5;
        front = rear = -1;
        arr = new int[n];
    }

    void enqueue(int val)
    {
        if(rear == n-1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if(front == -1)
            {
                front = 0;
            }
            rear++;
            arr[rear] = val;
        }
    }

    void dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Element deleted from queue is: " << arr[front] << endl;
            front++;
        }
    }

    void Front()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    void size()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Size of queue is: " << rear-front+1 << endl;
        }
    }

    void display()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Elements in queue are: ";
            for(int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    int ch, val;
    cout << "1) Enequeue number: " << endl;
    cout << "2) Dequeue number: " << endl;
    cout << "3) Display Queue" << endl;
    cout << "4) Front of Queue" << endl;
    cout << "5) Size of Queue" << endl;
    cout << "6) Exit" << endl;
    do
    {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
            {
                cout << "Enter value to be pushed:" << endl;
                cin >> val;
                q.enqueue(val);
                break;
            }
            case 2:
            {
                q.dequeue();
                break;
            }
            case 3:
            {
                q.display();
                break;
            }
            case 4:
            {
                q.Front();
                break;
            }
            case 5:
            {
                q.size();
                break;
            }
            case 6:
            {
                cout << "Exit" << endl;
                break;
            }
            default:
            {
                cout << "Invalid Choice" << endl;
            }
        }
    } while (ch != 6);
    return 0;    
}