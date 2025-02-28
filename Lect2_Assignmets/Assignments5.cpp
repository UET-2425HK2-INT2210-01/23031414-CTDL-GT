#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}
    
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }
    
    void pop() {
        if (!top) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    void print() {
        Node* temp = top;
        if (!temp) return;
        while (temp->next) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data; 
    }
};

int main() {
    int n;
    cin >> n;
    Stack s;
    
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            s.push(x);
        } else if (op == "pop") {
            s.pop();
        }
    }
    
    s.print();
    return 0;
}

