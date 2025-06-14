# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
# 1663518227
class Solution:
    def getIntersectionNode(self,headA:ListNode,headB:ListNode)->Optional[ListNode]:
        t1,t2 = headA,headB
        while t1!=t2:
            t1 = headB if t1==None else t1.next
            t2 = headA if t2==None else t2.next
        return t1
