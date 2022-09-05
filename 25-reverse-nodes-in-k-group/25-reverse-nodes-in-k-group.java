/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
//     public ListNode reverseKGroup(ListNode head, int k) {
//     //1. test weather we have more then k node left, if less then k node left we just return head 
//     ListNode node = head;
//     int count = 0;
//     while (count < k) { 
//         if(node == null)return head;
//         node = node.next;
//         count++;
//     }
//     // 2.reverse k node at current level 
//        ListNode pre = reverseKGroup(node, k); //pre node point to the the answer of sub-problem 
//         while (count > 0) {  
//             ListNode next = head.next; 
//             head.next = pre; 
//             pre = head; 
//             head = next;
//             count = count - 1;
//         }
//         return pre;
// }
    
    
    public ListNode reverseKGroup(ListNode head, int k) {
    ListNode curr = head;
    int count = 0;
    while (curr != null && count != k) { // find the k+1 node
        curr = curr.next;
        count++;
    }
    if (count == k) { // if k+1 node is found
        curr = reverseKGroup(curr, k); // reverse list with k+1 node as head
        // head - head-pointer to direct part, 
        // curr - head-pointer to reversed part;
        while (count-- > 0) { // reverse current k-group: 
            ListNode tmp = head.next; // tmp - next head in direct part
            head.next = curr; // preappending "direct" head to the reversed list 
            curr = head; // move head of reversed part to a new node
            head = tmp; // move "direct" head to the next node in direct part
        }
        head = curr;
    }
    return head;
}
}



