// // Find All Duplicates in an Array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> nums{4,3,2,7,8,2,3,1};

//     vector<int> ans;

//     for(int i=0;i<nums.size();i++){
//         int num = abs(nums[i]);
//         int index = num-1;

//         if(nums[index] < 0 ){
//             ans.push_back(num);
//         }
//         else {
//             nums[index] *= -1;
//         }
//     }

//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
// }


//  Rotate Array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> nums{1,2,3,4,5,6,7};
//     int k = 3;

//     vector<int> temp(nums.size());

//     for(int i=0;i<nums.size();i++) {
//         temp[(i+k) % nums.size()] = nums[i];
//     }

//     nums = temp;

//     for(int i=0;i<nums.size();i++) {
//         cout << nums[i] << " ";
//     }
// }

//  Squares of a Sorted Array
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> nums{-4, -1, 0, 3, 10};

//     int n = nums.size();
//     vector<int> result(n); // Resize result vector to hold n elements

//     int i = 0, j = n - 1;
//     int k = n - 1;

//     while (i <= j) { // Continue until i surpasses j
//         int a = nums[i] * nums[i];
//         int b = nums[j] * nums[j];

//         if (a > b) {
//             result[k] = a;
//             i++;
//         }
//         else {
//             result[k] = b;
//             j--;
//         }
//         k--;
//     }
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }

//     return 0;
// }

//  Maximum Subarray

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum = 0;
//         int maxi = nums[0];

//         for(int i=0; i<nums.size(); i++) {
//             sum = sum + nums[i];

//             maxi = max(maxi, sum);

//             if(sum < 0) {
//                 sum = 0;
//             }
           
//         }
//          return maxi;
//     }
// };


//Remove Duplicates from Sorted Array
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int result = 1;

//         for(int i=1; i<nums.size(); i++){
//             if(nums[i] != nums[i-1]){
//                 nums[result] = nums[i];
//                 result++;
//             }
//         }
//         return result;
//     }
// };

