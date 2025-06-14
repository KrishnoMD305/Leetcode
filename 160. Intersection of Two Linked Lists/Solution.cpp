/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 1663500303
class Solution{
public:
    ListNode *getIntersectionNode(ListNode *headA,ListNode *headB){
        ListNode *t1 = headA, *t2 = headB;
        vector<ListNode*> v1,v2;
        while(t1!=nullptr){
            v1.push_back(t1);
            t1 = t1->next;
        }
        while(t2!=nullptr){
            v2.push_back(t2);
            t2 = t2->next;
        }
        for(auto i:v1){
            for(auto j:v2){
                if(i==j){return i;}
            }
        }
        return nullptr;
    }
};
