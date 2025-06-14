/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// 1662573183
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){return head;}
        ListNode *result = new ListNode{head->val,nullptr};
        ListNode *current1 = head->next, *current2 = result;
        int prev = head->val;
        while(current1 != nullptr){
            if(current1->val == prev){
                current1 = current1->next;
            }else{
                current2->next = new ListNode{current1->val,nullptr};
                current2 = current2->next;
                prev = current1->val;
                current1 = current1->next;
            }
        }
        return result;
    }
};
