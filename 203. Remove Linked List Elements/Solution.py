# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# 1663593339
class Solution:
    def removeElements(self,head:Optional[ListNode],val: int)->Optional[ListNode]:
        if not head: return head
        while head and head.val==val:
            tmp = head
            head = head.next
            del tmp
        cur = head
        while cur and cur.next:
            if cur.next.val == val:
                tmp = cur.next
                cur.next = cur.next.next
                del tmp
            else:
                cur = cur.next
        return head                 
