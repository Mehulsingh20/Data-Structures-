#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }
    void push(int value) {
        if (top == 100 - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int t = 0;
    while (t == 0){
        int condition;
        cout<<"Enter your choice:"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Pop"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>condition;
        switch(condition){
            case 1:
                int new_ele;
                cout<<"Enter the new element:";
                cin>>new_ele;
                s.push(new_ele);
                break;
            case 2:
                s.display();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.pop();
                break;
            default:
                t++;
        }

    }



    

    
    

    return 0;
}