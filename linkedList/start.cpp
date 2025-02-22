// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     // constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL; 
//     }
// };

// int main() {
//     Node* node1 = new Node(10);
//     cout << node1 -> data << endl;
//     cout << node1 -> next << endl;
// }



// insert at head

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;


    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// INSERTATHEAD

void insertAtHead(Node* &head, int data){
    // create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

// print node
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;

    // print(head);
    insertAtHead(head, 15);
    insertAtHead(head, 20);
    insertAtHead(head, 25);


    print(head);
}