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

//2 union of 2 array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int sizea = 5;
//     int brr[5] = {6,7,8,9,10};
//     int sizeb = 5;

//     vector<int> unionarr;
//     for(int i=0; i<sizea; i++){
//         unionarr.push_back(arr[i]);
//     }

//     for(int i=0; i<sizeb; i++){
//         unionarr.push_back(brr[i]);
//     }

//     cout << "Printed union of 2 array " << "\n";
//     for(int i=0; i<unionarr.size(); i++){
//         cout << unionarr[i] << " ";
//     }
//     return 0;
// }