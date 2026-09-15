#include<iostream>
using namespace std;

const int MAX = 5;

class queue {
    int arr[MAX];
    int front;
    int rear;

public:
    queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        } else {
            return false;
        }
    }

    bool isFull() {
        if ((rear + 1) % 100 == front) {
            return true;
        } else {
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
            rear = (rear + 1) % MAX;
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
            front = (front + 1) % MAX;
        }
        cout << removedValue << " dequeued successfully.\n";
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to peek.\n";
            return;
        } else {
            cout << "Front element is: " << arr[front] << "\n";
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) {
                break;
            }
            i = (i + 1) % MAX;
        }
        cout << "\n";
    }
};

int main() {
    queue q;
    int choice, value;
    do {
        cout << "\nEnter your choice:\n";
        cout << "1.enqueue \n";
        cout << "2.dequeue \n";
        cout << "3.peek \n";
        cout << "4.display \n";
        cout << "5.exit \n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the value you want to add: ";
                cin >> value;
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
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while(choice != 5);

    return 0;
}