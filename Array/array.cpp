// #include<iostream>
// using namespace std;
// int main() {
//     int arr[4] = {1,2,3,4};
//     for(int i=0;i<4;i++){
//         cout << arr[i] << " ";
//     }
// }

// 1
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int arr[5];
//      cout << "Enter the 5 array element's" << "\n";
//      for(int i=0;i<5;i++){
//          cin >> arr[i];
//      }
//      // print
//      for(int i=0;i<5;i++){
//          cout << "Five elements of array:- " << arr[i] << endl;
//      }
//  }

// 2
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int arr[5];
//      cout << "enter array" << "\n";
//      for(int i=0;i<5;i++){
//          cin >> arr[i];
//      }
//      for(int i=0;i<5;i++){
//          cout << arr[i] * 2 << " ";
//      }
//  }

// 3
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int arr[50];
//      int n;
//      cout << "Enter size of array" << "\n";
//      cin >> n;
//      cout << "Enter elements of aaray" << "\n";
//      for(int i=0;i<n;i++){
//          cin >> arr[i];
//      }

//     for(int i=0;i<n;i++){
//         cout << 1 << " ";
//     }

// int arr[4] = {1,2,3,4};
// for(int i=0;i<4;i++){
//     arr[i] = 1;
//     cout << arr[i] << " ";
// }

// for(int i=0;i<4;i++){
//     cout << arr[i];
// }
// }

// 4
// #include<iostream>
// using namespace std;
// void printarr(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void inc(int arr[],int size){
//     arr[0] = arr[0]+10;

//     printarr(arr,size);
// }
// int main(){
//     int arr[] = {4,4};
//     int size=2;
//     inc(arr, size);
//     printarr(arr, size);
// }

// 5   find element
//  #include<iostream>
//  using namespace std;

// bool find(int arr[], int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i] == key){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     int key;
//     cout << "enter the key" << "\n";
//     cin >> key;

//     if(find(arr, size, key)){
//         cout << "found";
//     }
//     else {
//         cout << "Not found";
//    }
//    return 0;
// }

// 6  0&1 count
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int arr[] = {1,0,1,0,1,0,1,0,1,0,1,1};
//      int size = 15;
//      int NumOne = 0;
//      int NumZero = 0;

//     for(int i=0;i<size;i++){
//         if(arr[i] == 1){
//             NumOne++;
//         }
//         else if(arr[i] == 0){
//             NumZero++;
//         }
//     }

//     cout << NumOne << endl;
//     cout << NumZero << endl;
// }

// 7 find maximum num
// #include<iostream>
// #include<climits>
// using namespace std;
// void findMaxNum(int arr[],int size){
//     int maxNum = INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i] > maxNum){
//             maxNum = arr[i];
//         }
//     }
//     cout << "Max Num is = " << maxNum << endl;
// }
// int main() {
//     int arr[10] = {1,2,3,4,5,6,9,8,7,5};
//     int size = 10;
//     findMaxNum(arr,size);
// }

// 8 Minmum Value
//  #include<iostream>
//  #include<climits>
//  using namespace std;
//  int main() {
//      int arr[7] = {7,6,5,4,3,1,2};
//      int size = 7;
//      int minNum = INT_MAX;

//     for(int i=0;i<size;i++){
//         if(arr[i] < minNum){
//             minNum = arr[i];
//         }
//     }
//     cout << "Min Value Is = " << minNum << endl;
//     return 0;
// }

// 9
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[8] = {10,20,30,40,50,60,70,80};
//     int size = 8;

//     int start = 0;
//     int end = size - 1;

//     while(start <= end){
//         if(start == end) {
//             cout << arr[start] << " ";
//         }
//         else {
//              cout << arr[start] << " ";
//              cout << arr[end] << " ";
//         }
//         start++;
//         end--;
//     }
//     return 0;
// }

// 10
//  #include<iostream>
//  using namespace std;
//  int main() {
//      int arr[8] = {1,2,3,4,5,6,7,8};
//      int size = 8;
//      int start = 0;
//      int end  = size -1;
//      while(start <= end) {
//          swap(arr[start], arr[end]);
//          start++;
//          end--;
//      }
//      for(int i=0;i<size;i++){
//          cout << arr[i] << " ";
//      }
//  }

// vector  11
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> arr;

//     cout << arr.capacity() << endl;
//     cout << arr.size() << endl;

//     // insert
//     arr.push_back(5);
//     arr.push_back(7);

//     for(int i=0;i<arr.size();i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     arr.pop_back();
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     int n;
//     cout << "enter the n" << endl;
//     cin >> n;

//     vector<int> brr(n, (1));

//     cout << brr.capacity() << endl;
//     cout << brr.size() << endl;

//     for(int i=0;i<brr.size();i++) {
//         cout << brr[i] << " ";
//     }
//     cout << endl;

//     // crr
//     vector<int> crr{10,20,30,40};
//     for(int i=0;i<crr.size();i++) {
//         cout << crr[i] << " ";
//     }
//     cout << endl;
// }

// yt

// #include<iostream>
// #include<climits>
// using namespace std;
// void maxiValue(int arr[], int size){
//     int maxi = INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//         }
//     }
//     cout << "max num is = " << maxi << endl;
// }
// void miniValue(int arr[], int size){
//     int mini = INT_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i] < mini) {
//             mini = arr[i];
//         }
//     }
//     cout << "mini num is = " << mini << endl;
// }
// int main() {
//     int arr[] = {2,3,45,5,6,1,7};
//     int size = 7;

//     maxiValue(arr,size);
//     miniValue(arr,size);
// }

// sum in array

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = 10;

//     int sum =  0;
//     for(int i=0;i<size;i++){
//         sum = sum + arr[i];
//     }

//     cout << "The sum of 10 num is = " << sum << endl;
// }

// 

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int size = 6;

//     int s = 0;
//     int e = size - 1;

//     while(s <= e) {
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }

//     for(int i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }
// }

// alternative swap;

#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    for(int i=0;i<size;i= i+2){
        if(i+1< size){
            swap(arr[i], arr[i+1]);
        }
    }

    cout << "printed array" << "\n";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}