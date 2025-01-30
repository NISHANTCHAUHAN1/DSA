// #include<iostream>
// using namespace std;

// int BinarySearch(int arr[],int size, int key){
//     int start = 0;
//     int end = size-1;
//     int  mid = start + (end - start) / 2;

//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid] < key){
//             start = mid +1;
//         }
//         else {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main() {
//     int evenNum[9] = {2,4,6,8,10,12,14,16,18};
//     int oddNum[10] = {1,3,5,7,9,11,13,15,17,19};

//     int evenIdx = BinarySearch(evenNum, 9, 14);
//     cout << "evenIdx " << evenIdx << endl;

//     int oddIdx = BinarySearch(oddNum, 10, 17);
//     cout << "oddIdx = " << oddIdx;
// }

// 2.

#include<iostream>
using namespace std;
int searchFirst(int nums[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(nums[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > nums[mid]){
            s = mid+1;
        }
        else {
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int searchLast(int nums[], int size, int key){
    int s = 0, e = size-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s <= e) {
        if(nums[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > nums[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main() {
    int nums[7] = {1,2,3,4,4,4,7};
    int firstOcc = searchFirst(nums, 7, 4);
    int lastOcc = searchLast(nums,7,4);
    
    cout << "FisrtOcc = " << firstOcc << endl;
    cout << "LastOcc = " << lastOcc << endl;

}