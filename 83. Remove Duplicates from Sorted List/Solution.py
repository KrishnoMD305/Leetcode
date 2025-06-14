# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# 1662578615
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head: return head
        result = ListNode(head.val,None)
        current1,current2,prev = head.next,result,head.val
        while current1 != None:
            if current1.val==prev:
                current1 = current1.next
            else:
                current2.next = ListNode(current1.val,None)
                current2 = current2.next
                prev = current1.val
                current1 = current1.next
        return result
