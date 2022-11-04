class Solution {
    public static void reverseString(char[] s) {
        
        // TWO POINTER APPROACH
        // intialize two pointers head and tail and just swap until they meet.
        int head = 0, tail = s.length - 1;
        
        //swap the head and the tail,until they are meeting..
        
        while (head <= tail) {
          char temp = s[head];
          s[head] = s[tail];
          s[tail] = temp;
          head++;
          tail--;
        }
    }
}