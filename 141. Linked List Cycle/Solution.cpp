/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 1663478543
class Solution {
public:
    bool hasCycle(ListNode *head){
        ListNode *slow = head,*fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }

};
