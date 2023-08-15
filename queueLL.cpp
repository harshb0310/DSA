#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class Queue
{
    Node* front, *rear; 
    public:
    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int data)
    {
        Node* temp = new Node(data);
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete(temp);
    }

    void Front()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front element is: " << front->data << endl;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;        
    }

    void size()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout << "Size of Queue is: " << count << endl;
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