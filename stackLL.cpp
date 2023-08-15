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

class Stack
{
    Node* top;
    public:
    Stack()
    {
        top=NULL;
    }
    void push(int data)
    {
        Node* temp=new Node(data);
        if(top==NULL)
        {
            top=temp;
            return;
        }
        temp->next=top;
        top=temp;
    }

    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp=top;
        cout<<"Element Popped Out is: "<<temp->data<<endl;
        top=top->next;
        delete temp;
    }

    void display()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void Top()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<top->data<<endl;
    }

    void size()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp=top;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        cout<<count<<endl;
    }
};

int main()
{
    Stack s;
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Top of stack" << endl;
    cout << "5) Size of stack" << endl;
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
                s.push(val);
                break;
            }
            case 2:
            {
                s.pop();
                break;
            }
            case 3:
            {
                s.display();
                break;
            }
            case 4:
            {
                s.Top();
                break;
            }
            case 5:
            {
                s.size();
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
