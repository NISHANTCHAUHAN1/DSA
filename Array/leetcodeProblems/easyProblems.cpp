// 88. Merge Sorted Array

// class Solution {
//     public:
//         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//             int last = m + n - 1;
    
//             while(m > 0 && n > 0 ){
//                 if(nums1[m-1] > nums2[n-1]){
//                     nums1[last] = nums1[m-1];
//                     m--;
//                 }
//                 else{
//                     nums1[last] = nums2[n-1];
//                     n--;
//                 }
//                 last--;
//             }
//             while(n > 0){
//                 nums1[last] = nums2[n-1];
//                 n--;
//                 last--;
//             }
//         }
//     };


// 27. Remove Element

// class Solution {
//     public:
//         int removeElement(vector<int>& nums, int val) {
//             int k = 0;
    
//             for(int i=0; i<nums.size(); i++){
//                 if(nums[i] != val) {
//                     nums[k] = nums[i];
//                     k++;
//                 }
//             }
//             return k;
//         }
//     };

// 26. Remove Duplicates from Sorted Array

// class Solution {
//     public:
//         int removeDuplicates(vector<int>& nums) {
//             int i = 0, j = 1;
    
//             while(j < nums.size()) {
//                 if(nums[i] != nums[j]){
//                     i++;
//                     nums[i] = nums[j];
//                 }
//                 j++;
//             }
//             return i+1;
//         }
//     };
