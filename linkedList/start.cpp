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

//     // destructor
//     ~Node(){
//         int value = this -> data;
//         if(this -> next != NULL){
//             delete next;
//             this -> next = NULL;
//         }
//         cout << "Memory Free " << value << endl;
//     }
// };

// // INSERT AT HEAD

// void insertAtHead(Node* &head, int data){

//     // create new Node
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head = temp;
// }

// // INSERT AT TAIL

// void insertAtTail(Node* &tail, int data){
//     Node* temp = new Node(data);

//     tail -> next = temp;
//     tail = temp;
// }

// // INSERT AT POSITION

// void insertAtPos(Node* &tail, Node* &head, int pos, int data){
//     if(pos == 1){
//         insertAtHead(head, data);
//         return;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < pos-1){
//         temp = temp -> next;
//         cnt++;
//     }

//     Node* NodeToInsert = new Node(data);
//     NodeToInsert -> next = temp -> next;
//     temp -> next = NodeToInsert;

//     // if(temp -> next == NULL){
//     //     insertAtTail(tail, data);
//     //     return;
//     // }

//     if(NodeToInsert -> next == NULL){ // Update tail if needed
//         tail = NodeToInsert;
//     }
// }

// // deletion 

// void deleteNode(Node* &head, Node* &tail, int pos) {
//     if (head == NULL) {
//         cout << "List is empty. Nothing to delete." << endl;
//         return;
//     }

//     // Deleting first node (head)
//     if (pos == 1) {
//         Node* temp = head;
//         head = head->next;

//         // If head becomes null, also update tail
//         if (head == NULL) {
//             tail = NULL;
//         }

//         temp->next = NULL;
//         delete temp;
//         return;
//     }

//     // Deleting middle or last node
//     Node* curr = head;
//     Node* prev = NULL;
//     int cnt = 1;

//     while (curr != NULL && cnt < pos) {
//         prev = curr;
//         curr = curr->next;
//         cnt++;
//     }

//     if (curr == NULL) {
//         cout << "Invalid position." << endl;
//         return;
//     }

//     prev->next = curr->next;

//     // Update tail if last node is deleted
//     if (curr->next == NULL) {
//         tail = prev;
//     }

//     curr->next = NULL;
//     delete curr;
// }



// // print node
// void print(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main() {
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     // cout << node1 -> data << " ";
//     // cout << node1 -> next << " ";

//     // insertAtHead(head, 20);
//     // insertAtHead(head, 30);
//     // insertAtHead(head, 40);

//     insertAtTail(tail, 20);
//     insertAtTail(tail, 30);

//     // cout << "head " << head -> data << endl;
//     // cout << "tail " << tail -> data << endl;

//     // insertAtPos(tail, head, 3, 50);
//     deleteNode(head,tail, 3);

//     cout << "head " << head -> data << endl;
//     cout << "tail " << tail -> data << endl;

//     print(head);
// }

 

              // doubly  linkedlist

// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // constructor
//     Node(int data){
//         this -> data = data;
//         this -> prev = NULL;
//         this -> next = NULL;
//     }

//     //distructor
//     ~Node() {
//         int value = this -> data;
//         if(next != NULL){
//             delete next;
//             next = NULL;
//         }
//         cout << "Memory Free " << value << endl;
//     }
// };


// // traversing a linkedlist
// void printNode(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// // get length of linkedlist
// int getLength(Node* head) {
//     int len = 0;
//     Node* temp = head;

//     while (temp != NULL) {
//         len++;
//         temp = temp->next;
//     }
//     return len; 
// }

// // INSERT AT HEAD
// void insertAtHead(Node* &head,Node* &tail, int data){

//     if(head == NULL) {
//         Node* temp = new Node(data);
//         head = temp;
//     }
//     else {
//         Node* temp = new Node(data);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     }
// }

// // INSERT AT TAIL

// void insertAtTail(Node* &tail,Node* &head, int data){
//     if(tail == NULL) {
//         Node* temp = new Node(data);
//         tail = temp;
//         head = temp;
//     }
//     else {
//         Node* temp = new Node(data);
//         tail -> next = temp;
//         temp -> prev = tail;
//         tail = temp;
//     }
// }

// // INSERT AT POSITION

// void insertAtPos(Node* &tail, Node* &head, int pos, int data) {
//     if(pos == 1){
//         insertAtHead(head,tail, data);
//         return;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < pos - 1){
//         temp = temp -> next;
//         cnt++;
//     }

//     if(temp -> next == NULL){
//         insertAtTail(tail,head, data);
//         return;
//     }

//     // create node
//     Node* nodeToInsert = new Node(data);

//     nodeToInsert -> next = temp -> next;
//     // temp -> next -> prev = nodeToInsert;
//     nodeToInsert -> prev = temp; 
//     temp -> next = nodeToInsert;
//     // nodeToInsert -> prev = temp;
// }

// // DELETION

// void deleteNode(Node* &head, Node* &tail, int pos) {
//     if(pos == 1){
//         Node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp -> next;
//         temp -> next = NULL;
//         delete temp;
//     }
//     else{
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < pos ){
//             prev = curr;
//             curr = curr -> next;
//             cnt++;      
//         }

//         curr -> prev = NULL;
//         prev -> next = curr -> next;
//         //     // Update tail if last node is deleted
//          if (curr->next == NULL) {
//             tail = prev;
//           }

//         curr -> next = NULL;
//         delete curr;
//     }
// }


// int main() {
//     // Node* node1 = new Node(10);
//     Node* head = NULL;
//     Node* tail = NULL;

//     // insertAtHead(head, 20);
//     // insertAtHead(head, 30);
//     // insertAtHead(head, 40);

//     insertAtTail(tail, head, 20);
//     insertAtTail(tail, head, 30);
//     insertAtTail(tail, head, 40);
//     insertAtTail(tail, head, 50);
//     insertAtTail(tail, head, 60);


//     // insertAtPos(tail, head, 4, 20);
//     deleteNode(head, tail, 5);
//     printNode(head);

//     cout << "head " << head -> data << endl;
//     cout << "tail " << tail -> data << endl;
   
//     cout << getLength(head) << endl;
// }
            