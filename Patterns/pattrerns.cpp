//1 
// #include<iostream>
// using namespace std;
// void sqpat(int r,int c){
//     int i=1;
//     while(i<=r) {
//         int j=1;
//         while(j<=c) {
//             cout << " * ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// int main() {
//     int row, col;
//     cout << "enter the r and c" << endl;
//     cin >> row >> col;
//     sqpat(row,col);
// }

//2
// #include<iostream>
// using namespace std;
// void countpat(int n) {
//     int i = 1;
//     while(i<=n) {
//         int j = 1;
//         while(j<=n) {
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     countpat(n);
// }

//3
// #include<iostream>
// using namespace std;
// void countpat(int n) {
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=n;j++) {
//             cout << j;
//         };
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     countpat(n);
// }


//4 
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=n;j++) {
//             cout << n-j+1;
//         }
//         cout << endl;
//     }
// }


//5
// #include<iostream>
// using namespace std;
// void printpat(int n) {
//     int i = 1;
//     int count = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n) {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     printpat(n);
// }

//6
// #include<iostream>
// using namespace std;
// int main() {
//     int r;
//     cin >> r;
//     for(int i=1;i<=r;i++) {
//         for(int j=1;j<=i;j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//7
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int row = 1;
//     while(row<=n) {
//         int col = 1;
//         while(col<=row) {
//             cout << row << " ";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }

//8
// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int row = 1;
//     int count = 1;
//     while(row<=n) {
//         int col = 1;
//         while(col<=row) {
//             cout << count << " ";
//             count++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     printPat(n);
// }

//9
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++) {
//         for(int j=i;j<=n;j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//10
// #include<iostream>
// using namespace std;
// int main() {
//     int rownum,colnum;
//     cout << "Enter the row and col num" << endl;
//     cin >> rownum >> colnum;
//     for(int row=0;row<rownum;row++) {
//         if(row == 0 || row == rownum-1){
//             for(int col=0;col<colnum;col++){
//                 cout << "* ";
//             }
//         }
//         else{
//             cout << "* ";
//             for(int i=0;i<colnum-2;i++) {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//11
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int row=1;row<=n;row++) {
//         for(int col=1;col<=n-row;col++) {
//             cout << col;
//         }
//         cout << endl;
//     }
// }

//12
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++) {
            cout << " ";
        }
        //star
        for(int col=0;col<row+1;col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

