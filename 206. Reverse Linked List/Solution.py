# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# 1665578398
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head: return head
        tmp = []
        curr = head
        while curr != None:
            tmp.append(curr.val)
            curr = curr.next
        tmp = tmp[::-1]
        result = ListNode(tmp[0],None)
        cur = result
        for i in range(1,len(tmp)):
            cur.next = ListNode(tmp[i],None)
            cur = cur.next
        return result
