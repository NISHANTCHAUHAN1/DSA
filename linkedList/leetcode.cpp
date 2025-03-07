// 141. Linked List Cycle

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {

//         if(head == NULL || head -> next == NULL)
//             return NULL;

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow -> next;
//             fast = fast -> next -> next;

//             if(fast == slow)
//                 break;
//         }

//         if(slow != fast)
//             return NULL;

//         ListNode* P = head;

//         if(P != slow) {
//             P = P -> next;
//             slow = slow -> next;
//         }
//         return P;
//     }
// };


// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head == NULL || head->next == NULL)
//             return false;

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if(fast == slow)
//                 return true; // cycle detected
//         }

//         return false; // no cycle
//     }
// };

// 2. Add Two Numbers

// class Solution {
//     public:
//         ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//             ListNode* dummy = new ListNode(0); // Dummy node for result
//             ListNode* curr = dummy; // Pointer to build result list
//             int carry = 0;
    
//             while (l1 != nullptr || l2 != nullptr || carry > 0) {
//                 int sum = carry;
    
//                 if (l1) {
//                     sum += l1->val;
//                     l1 = l1->next;
//                 }
    
//                 if (l2) {
//                     sum += l2->val;
//                     l2 = l2->next;
//                 }
    
//                 carry = sum / 10; // Update carry
//                 curr->next = new ListNode(sum % 10); // Create new node with last digit of sum
//                 curr = curr->next; // Move to next node
//             }
    
//             return dummy->next; // Skip dummy node
//         }
//     };

// 206. Reverse Linked List

// class Solution {
// public:
    
//     ListNode* reverseSolve(ListNode* head) {
        
//         if(!head || !head->next)
//             return head;
        
//         ListNode* last   = reverseSolve(head->next);
//         head->next->next = head;
//         head->next       = NULL;
            
//         return last;
        
//     }
    
//     ListNode* reverseList(ListNode* head) {
//         return reverseSolve(head);
//     }
// }

// 2 approcah 

// class Solution {
//     public:
//         ListNode* reverseList(ListNode* head) {
//             ListNode* prev = NULL;
    
//             while(head != NULL){
//                 ListNode* next = head -> next;
    
//                 head -> next = prev;
//                 prev = head;
//                 head = next;
//             }
//             return prev;
//         }
//     };


// 21. Merge Two Sorted Lists 
// class Solution {
//     public:
//         ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//             if(list1 == NULL){
//                 return list2;
//             }
//             if(list2 == NULL){
//                 return list1;
//             }
    
//             ListNode* result;
    
//             if(list1->val < list2->val){
//                 result = list1;
//                 result -> next = mergeTwoLists(list1->next, list2);
//             }
//             else{
//                 result = list2;
//                 result->next =  mergeTwoLists(list1, list2->next);
//             }
//              return result;
//         }
//     };