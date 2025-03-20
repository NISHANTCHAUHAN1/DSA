// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(7);
//     s.push(8);

//     s.pop();

//     cout << "print top element of stack " << s.top() << endl;

//     if(s.empty()){
//         cout << "Empty Stack " << endl;
//     }
//     else{
//         cout << "NOT empty" << endl;
//     }

//     cout << "size of stack " << s.size() << endl;
// }


// stack implemention without using STL 

#include<iostream>
#include<stack>
using namespace std;
class Mystack {
    public:
    int *arr;
    int top;
    int size;

    Mystack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow " << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Empty " << endl;
        }
    }


    int peak() { 
        if (top >= 0) {
            return arr[top]; 
        } else {
            cout << "Stack Empty" << endl;
            return -1; 
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main() {

    Mystack st(5);

    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();
    st.pop();
    st.pop();
    cout << "Peak Element: " << st.peak() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty" << endl;
    }
    else {
        cout << "Stack is not empty " << endl;
    }
}