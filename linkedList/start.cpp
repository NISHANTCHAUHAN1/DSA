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



// INSERTION IN LINKED LIST AND DELELTION

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

    // destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory Free " << value << endl;
    }
};

// INSERT AT HEAD

void insertAtHead(Node* &head, int data){

    // create new Node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

// INSERT AT TAIL

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail -> next = temp;
    tail = temp;
}

// INSERT AT POSITION

void insertAtPos(Node* &tail, Node* &head, int pos, int data){
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }

    Node* NodeToInsert = new Node(data);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;

    // if(temp -> next == NULL){
    //     insertAtTail(tail, data);
    //     return;
    // }
    if(NodeToInsert -> next == NULL){ // Update tail if needed
        tail = NodeToInsert;
    }
}

// deletion 

void deleteNode(Node* &head, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        // memory free
        temp -> next = NULL;
        delete(temp);
    }
    else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;

        delete(curr);
    }

}


// print node
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // cout << node1 -> data << " ";
    // cout << node1 -> next << " ";

    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtHead(head, 40);

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);

    // insertAtPos(tail, head, 3, 50);
    // deleteNode(head, 3);

    print(head);
}