class Solution {
public:
    
    // check it solution many approches is given.
//     we can see height[left] < height[right],then for pointerleft, he knows a taller bar exists on his right side, then if leftMax is taller than him, he can contain some water for sure(in our case). So we go ans += (left_max - height[left]). But if leftMax is shorter than him, then there isn't a left side bar can help him contain water, then he will become other bars' leftMax. so execute (left_max = height[left]).
// Same idea for right part.
// add some comments to the code above.
    int trap(vector<int>& height)
{
    int left = 0, right = height.size() - 1;
    int ans = 0;
    int left_max = 0, right_max = 0;
    while (left < right) {
        // a taller bar exists on left pointer's right side
        if (height[left] < height[right]) {
            height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
            ++left;
        }
        // a taller bar exists on right pointer's left side
        else {
            height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
            --right;
        }
    }
    return ans;
}
};