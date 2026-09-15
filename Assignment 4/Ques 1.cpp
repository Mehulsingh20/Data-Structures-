#include<iostream>
using namespace std;

class queue{
    int arr[100];
    int front;
    int rear;

    public:
    
    queue(){
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        if (front == -1){
            cout<<"Underflow!";
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if (front == 100-1){
            return true;
        }else {
            return false;
        }
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << val << ".\n";
            return;
        } else if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = val;
        cout << val << " enqueued successfully.\n";
    }

void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to dequeue.\n";
            return;
        }
        int removedValue = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        cout << removedValue << " dequeued successfully.\n";
    }


    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to peek.\n";
            return;
        }else
        cout << "Front element is: " << arr[front] << "\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }


};


int main(){
    queue q;
    int choice, value;
    do {
        cout<<"Eneter your choice:\n";
        cout<<"1.enqueue \n";
        cout<<"2.dequeue \n";
        cout<<"3.peek \n";
        cout<<"4.display \n";
        cout<<"5.exit \n";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter the value you want to add:";
                cin>>value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout<<"Exiting";
                break;
            default:
                cout<<"Invalid choice";
                break;
        }
    }while(choice != 5);

    return 0;
}