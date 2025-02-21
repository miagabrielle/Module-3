#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

   
    Node(int value) {
        data = value;
        next = nullptr;
    }
};


void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    
    if (head == nullptr) {
        head = newNode;
    } else {
       
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp->next = newNode;
    }
}


void deleteNodeByValue(Node*& head, int value) {
    // If the list is empty
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    
    if (temp->next == nullptr) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}


void displayList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    
    cout << "Linked List: ";
    displayList(head);

   
    deleteNodeByValue(head, 20);
    cout << "After deleting 20, Linked List: ";
    displayList(head);

    deleteNodeByValue(head, 50);
    cout << "After attempting to delete 50, Linked List: ";
    displayList(head);

    return 0;
}
