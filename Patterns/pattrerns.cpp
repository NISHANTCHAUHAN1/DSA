// 1
//  #include<iostream>
//  using namespace std;
//  void sqpat(int r,int c){
//      int i=1;
//      while(i<=r) {
//          int j=1;
//          while(j<=c) {
//              cout << " * ";
//              j++;
//          }
//          cout << endl;
//          i++;
//      }
//  }
//  int main() {
//      int row, col;
//      cout << "enter the r and c" << endl;
//      cin >> row >> col;
//      sqpat(row,col);
//  }

// 2
//  #include<iostream>
//  using namespace std;
//  void countpat(int n) {
//      int i = 1;
//      while(i<=n) {
//          int j = 1;
//          while(j<=n) {
//              cout << i;
//              j++;
//          }
//          cout << endl;
//          i++;
//      }
//  }
//  int main() {
//      int n;
//      cin >> n;
//      countpat(n);
//  }

// 3
//  #include<iostream>
//  using namespace std;
//  void countpat(int n) {
//      for(int i=1;i<=n;i++) {
//          for(int j=1;j<=n;j++) {
//              cout << j;
//          };
//          cout << endl;
//      }
//  }
//  int main() {
//      int n;
//      cin >> n;
//      countpat(n);
//  }

// 4
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int n;
//      cin >> n;
//      for(int i=1;i<=n;i++) {
//          for(int j=1;j<=n;j++) {
//              cout << n-j+1;
//          }
//          cout << endl;
//      }
//  }

// 5
//  #include<iostream>
//  using namespace std;
//  void printpat(int n) {
//      int i = 1;
//      int count = 1;
//      while(i<=n){
//          int j = 1;
//          while(j<=n) {
//              cout << count << " ";
//              count++;
//              j++;
//          }
//          cout << endl;
//          i++;
//      }
//  }
//  int main() {
//      int n;
//      cin >> n;
//      printpat(n);
//  }

// 6
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int r;
//      cin >> r;
//      for(int i=1;i<=r;i++) {
//          for(int j=1;j<=i;j++) {
//              cout << " * ";
//          }
//          cout << endl;
//      }
//      return 0;
//  }

// 7
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int n;
//      cin >> n;
//      int row = 1;
//      while(row<=n) {
//          int col = 1;
//          while(col<=row) {
//              cout << row << " ";
//              col++;
//          }
//          cout << endl;
//          row++;
//      }
//      return 0;
//  }

// 8
//  #include<iostream>
//  using namespace std;
//  void printPat(int n){
//      int row = 1;
//      int count = 1;
//      while(row<=n) {
//          int col = 1;
//          while(col<=row) {
//              cout << count << " ";
//              count++;
//              col++;
//          }
//          cout << endl;
//          row++;
//      }
//  }
//  int main() {
//      int n;
//      cin >> n;
//      printPat(n);
//  }

// 9
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int n;
//      cin >> n;
//      for(int i=1;i<=n;i++) {
//          for(int j=i;j<=n;j++) {
//              cout << " * ";
//          }
//          cout << endl;
//      }
//      return 0;
//  }

// 10
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int rownum,colnum;
//      cout << "Enter the row and col num" << endl;
//      cin >> rownum >> colnum;
//      for(int row=0;row<rownum;row++) {
//          if(row == 0 || row == rownum-1){
//              for(int col=0;col<colnum;col++){
//                  cout << "* ";
//              }
//          }
//          else{
//              cout << "* ";
//              for(int i=0;i<colnum-2;i++) {
//                  cout << "  ";
//              }
//              cout << "* ";
//          }
//          cout << endl;
//      }
//  }

// 11
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int n;
//      cin >> n;
//      for(int row=0;row<n;row++) {
//          for(int col=0;col<n-row;col++) {
//              cout << col+1;
//          }
//          cout << endl;
//      }
//  }

// 12
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int n;
//      cin >> n;
//      for(int row=0;row<n;row++){
//          //space
//          for(int col=0;col<n-row-1;col++) {
//              cout << " ";
//          }
//          //star
//          for(int col=0;col<row+1;col++) {
//              cout << "* ";
//          }
//          cout << endl;
//      }
//  }

// 13
// #include <iostream>
// using namespace std;
// void starpat(int n)
// {
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int  n;
//     cin >> n;
//     starpat(n);
// }

//14
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter the n" << endl;
//     cin >> n;
//     for(int row=0;row<n;row++) {
//         for(int col=0;col<n-row-1;col++) {
//             cout << " ";
//         }
//         for(int col=0;col<row+1;col++) {
//             cout<< "* ";
//         }
//         cout << endl;
//     }
//     for(int row=0;row<n;row++) {
//         for(int col=0;col<row;col++) {
//             cout << " ";
//         } 
//         for(int col=0;col<n-row;col++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//15
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col++){
//             cout << " ";
//         }
//         for(int col=0;col<2*row+1;col++){
//            if(col == 0 || col== 2*row){
//             cout << "*";
//            }
//            else {
//             cout << " ";
//            }
//         }
//         cout << endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout << " ";
//         }
//         for(int col=0;col<2*n-2*row-1;col++){
//             if(col == 0 || col == 2*n - 2*row-2) {
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// 16
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout << "*";
//         }
//         for(int col=0;col<2*row+1;col++){
//             cout<< " ";
//         }
//         for(int col=0;col<n-row;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout << "*";
//         }
//         for(int col=0;col< 2*n-2*row-1;col++){
//             cout << " ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<< "*";
//         }
//         cout << endl;
//     }
// }

//17
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout << row+1;
//             if(col != row){
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout << n-row;
//             if(col != n-row-1) {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

//18
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int row=0;row<n;row++){
//         int col;
//         for(col=0;col<row+1;col++){
//             int ans = col +1;
//             char ch = ans +'A' -1;
//             cout << ch;
//         }
//         for(int col=row;col>=1;col--){
//             // cout << col;
//             int ans = col;
//             char ch = ans + 'A' - 1;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }
