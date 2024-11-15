// 1 find unique elements

// #include<iostream>
// #include<vector>
// using namespace std;
// int findUnique(vector<int> arr) {
//     int uniqueElement = 0;
//     for(int i=0; i<arr.size(); i++) {
//         uniqueElement = uniqueElement ^ arr[i];
//     }
//     return uniqueElement;
// }
// int main() {
//     int n;
//     cout << "Enter the size of array" << "\n";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of array" << "\n";
//     for(int i=0; i<arr.size(); i++) {
//         cin >> arr[i];
//     }

//     int unquienum = findUnique(arr);
//     cout << "The element is = " << unquienum << endl;
// }

// 2 not print duplicate array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,1,2,3,7,8};
//     int size = 10;

//     vector<int> brr;

//     for(int i=0;i<size;i++){
//         bool found = false;
//         for(int j=0; j<brr.size(); j++){
//             if(brr[j] == arr[i]){
//                 found = true;
//             }
//         }
//         if(!found) {
//             brr.push_back(arr[i]);
//         }
//     }

//     cout << "Printed Array " << endl;
//     for(int i=0; i<brr.size(); i++){
//         cout << brr[i] << " ";
//     }
// }


//3 Insertion of 2 array;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> arr{1 ,2, 2, 2, 3, 4};
//     vector<int> brr{2,2,3,3};

//     vector<int> ans;

//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=0; j<brr.size(); j++){
//             if(element == brr[j]){
//                 // mark
//                 brr[j] = -1;
//                 ans.push_back(element);
//             }
//         }
//     }

//     cout << "Printend interstion element" << "\n";
//     // for(int i=0;i<ans.size();i++){
//     //     cout << ans[i] << " ";
//     // }

//     for(auto value: ans){
//         cout << value << " ";
//     }
//     return 0;
// }

//4 union of 2 array with no dupicate printend;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[] = {1,2,2,1,3};
//     int sizea = 5;
//     int brr[] = {6,7,6,7,8};
//     int sizeb = 5;

//     vector<int> unionEle;

//     for(int i=0; i<sizea; i++){
//         bool found = false;
//         for(int j=0;j<unionEle.size(); j++){
//             if(unionEle[j] == arr[i]){
//                 found = true;
//             }
//         }
//         if(!found) {
//             unionEle.push_back(arr[i]);
//         }
//     }

//     for(int i=0; i<sizeb; i++){
//         bool found = false;
//         for(int j=0; j<unionEle.size(); j++){
//             if(unionEle[j] == brr[i]){
//                 found = true;
//             }
//         }
//         if(!found) {
//             unionEle.push_back(brr[i]);
//         }
//     }

//     cout << "Printed Union Array " << "\n";
//     for(int i=0; i<unionEle.size(); i++) {
//         cout << unionEle[i] << " ";
//     }
//     return 0;
// }

//5 2 sum
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int size = 9;
//     int sum =  9;

//     for(int i=0; i<size; i++){
//         int element = arr[i];
//         for(int j=i+1; j<size; j++) {
//             if(sum == element + arr[j]) {
//                 cout << "The Pair of Two Sum "<< element <<"," << arr[j] << " = "<< sum << "\n";
//             }
//         }
//     }
//     return 0;
// }

//6
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {10,20,30,40};
//     int size = 9;
//     int sum = 80;

//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             for(int k=j+1; k<size; k++){
//                 if(sum == arr[i] + arr[j] + arr[k]){
//                     cout << "the 3 sum is of " << arr[i] << "," << arr[j] << "," << arr[k] << " = "<< sum << endl;
//                 }
//             }
//         }
//     }
// }

//7 sort 0&1;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> arr{1,0,1,0,1,0,1,0,0,1};

//     int start = 0;
//     int end = arr.size() - 1;
//     int i = 0;
//     while(start <= end) {
//         if(arr[i] == 0){
//             swap(arr[i], arr[start]);
//             start++;
//             i++;
//         }
//         else{
//             swap(arr[i], arr[end]);
//             end--;
//         }
//     }
//     for(int i=0; i<arr.size(); i++){
//         cout << arr[i] << " " ;
//     }
// }

// 8 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{1, 2, 3, -3, -4, 5, -7, 8, -1, -7};

    int s = 0;
    int e = arr.size() - 1;

    // Rearrange such that all negatives are in front
    while(s <= e) {
        if(arr[s] < 0){  // If current element at s is negative, just move s forward
            s++;
        }
        else if(arr[e] >= 0){  // If current element at e is positive, move e backward
            e--;
        }
        else {
            // Swap negative number from the right with positive number from the left
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }

    // Print the modified array
    cout << "Array with negative numbers first:\n";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

//9
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<int> arr{1,2,3,2,4,5,4};
//     vector<int> ans;

//     for(int i=0; i<arr.size(); i++){
//         bool found = false;
//         for(int j=0; j<ans.size(); j++){
//             if(arr[i] == ans[j]){
//                 found = true;
//             }
//         }
//         if(found) {
//             ans.push_back(arr[i]);
//         }
//     }

//     for(int i=0; i<ans.size(); i++){
//         cout << ans[i] << " ";
//     }
// }