#include <bits/stdc++.h>    
using namespace std;
class Stack
{
    public:
    int n;
    int *stack;
    int top;
    Stack()
    {
        n = 5;
        stack = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top >= n - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            stack[top] = val;
        }
    }
    void pop()
    {
        if (top <= -1)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "The popped element is " << stack[top] << endl;
            top--;
        }
    }
    void size()
    {
        if (top >= 0)
        {
            cout << "Total Elements in stack are = "<<top+1;
            cout << endl;
        }
        else
            cout << "Stack is empty"<<endl;
    }
    void display()
    {
        if (top >= 0)
        {
            cout << "Stack elements are:";
            for (int i = top; i >= 0; i--)
                cout << stack[i] << " ";
            cout << endl;
        }
        else
            cout << "Stack is empty"<<endl;
    }

    void Top()
    {
        if (top >= 0)
        {
            cout << "Top element is: " << stack[top] << endl;
        }
        else
            cout << "Stack is empty"<<endl;
    }
};

int main()
{   Stack s;
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