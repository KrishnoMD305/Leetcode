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
// 1663554347
class Solution{
public:
    ListNode* removeElements(ListNode *head,int val){
        if(!head) return head;
        ListNode *result = new ListNode{head->val,nullptr};
        ListNode *current1 = head->next;
        ListNode *current2 = result;
        while(current1 != nullptr){
            if(current1->val==val){current1 = current1->next;}
            else{
                current2->next = new ListNode{current1->val,nullptr};
                current1 = current1->next;
                current2 = current2->next;
            }
        }
        if(result->val==val) result = result->next;
        return result;
    }
};
