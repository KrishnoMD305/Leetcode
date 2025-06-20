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
// 1663586184
class Solution{
public:
    ListNode* removeElements(ListNode *head,int val){
        if(!head) return head;
        while(head!=nullptr && head->val==val){
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        ListNode *cur = head;
        while(cur && cur->next){
            if(cur->next->val==val){
                ListNode *tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }else{
                cur = cur->next;
            }
        }
        return head;
    }
};
