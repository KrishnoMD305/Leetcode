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
// 1665572692
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head){return head;}
        vector<int> tmp;
        ListNode *curr = head;
        while(curr != nullptr){
            tmp.push_back(curr->val);
            curr = curr->next;
        }
        reverse(tmp.begin(),tmp.end());
        ListNode *result = new ListNode{tmp[0],nullptr};
        ListNode *cur = result;
        for(int i=1; i<tmp.size(); i++){
            cur->next = new ListNode{tmp[i],nullptr};
            cur = cur->next;
        }
        return result;
    }
};
