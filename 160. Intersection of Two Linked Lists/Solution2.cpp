/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 1663514077
class Solution{
public:
    ListNode *getIntersectionNode(ListNode *headA,ListNode *headB){
        ListNode *t1 = headA, *t2 = headB;
        while(t1 != t2){
            if(t1==nullptr){t1 = headB;}
            else{t1 = t1->next;}
            if(t2==nullptr){t2 = headA;}
            else{t2 = t2->next;}
        }
        return t2;
    }
};
