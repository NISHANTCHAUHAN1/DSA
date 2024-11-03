// 1
// #include<iostream>
// using namespace std;
// int main() {
//     int r;
//     cout << "enter the row num " << "\n";
//     cin >> r;

//     int c;
//     cout << "enter the col num " << "\n";
//     cin >> c;

//     int arr[r][c];
//     cout << "Enter array element" << "\n";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Printed the array element" << "\n";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//2
// #include<iostream>
// using namespace std;

// void printRowSum(int arr[][3], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         int sum = 0;
//         for (int j = 0; j < col; j++) {
//             sum = sum + arr[i][j];
//         }
//         cout << "The sum of row " << i+1 << " is = " << sum << "\n"; 
//     }
// }

// int main() {
//     int row = 3;
//     int col = 3;
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     printRowSum(arr, row, col);
// }


//3
// #include<iostream>
// using namespace std;
// bool found(int arr[][3], int row, int col, int key) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (arr[i][j] == key) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     int row = 3;
//     int col = 3;
//     int key = 8;

//     // Initialize the 2D array
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     // Call the function and check if the key is found
//     if (found(arr, row, col, key)) {
//         cout << "Found\n";
//     } else {
//         cout << "Not Found\n";
//     }

//     return 0;
// }

// 4
// #include<iostream>
// #include<climits>
// using namespace std;
// int maxiNum(int arr[][3], int r, int c){
//     int maxi = INT_MIN;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(arr[i][j] > maxi){
//                 maxi = arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }
// int main() {
//     int r = 3;
//     int c = 3;

//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//     };

//     int maxNum = maxiNum(arr, r, c);
//     cout << "the max num is " << maxNum << "\n";
// }

//5 spare matrix
// #include<iostream>
// using namespace std;
// int main() {
//     int r = 3;
//     int c = 3;

//     int arr[3][3];
//     cout << "Enter the spare mat elements" << endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Printed elements of spare mat" << endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Now convert mat into spare mat" << endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

//6 add mat
// #include<iostream>
// using namespace std;
// int main() {
//     int r = 2;
//     int c = 2;

//     int arr[2][2] = {
//         {1,2},
//         {1,2},
//     };

//     int brr[2][2] = {
//         {2,3},
//         {2,3},
//     };

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout << brr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Print addition of 2 mat" << "\n";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout << arr[i][j] + brr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//7 vector 2D

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<vector<int> > arr;

//     vector<int> a{1,2,3};
//     vector<int> b{4,5,6};
//     vector<int> c{7,8,9,6};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

//     cout << "Printed 2d vector" << "\n";

//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//8 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r = 5;
    int c = 5;

    int value;
    cout << "Value is " << "\n";
    cin >> value;

    vector<vector<int> > arr(r ,vector<int>(c, value));

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}