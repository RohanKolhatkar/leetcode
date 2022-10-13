/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
//refer 1st testcase 4,5,1,9.....
// since we are not given head so we cant delete 5 directly instead we will
//copy 1 to 5 place and delete the 1 .
//so 4,5,1,9 == >> 4,1,9.


class Solution {
    public void deleteNode(ListNode node) {
        node.val=node.next.val;
        node.next=node.next.next;//using this the link of 5 with 1 is now changed to 5            //to 0 so 1 is deleted.
    }
}