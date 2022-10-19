class Solution {
public:
    int tribonacci(int n) {
    int dp[n + 3];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }
    return dp[n];
    }
};




//simple answer it works in coding blocks ide biut not here. the logic is same as of fibinacci sequence using basic dp concepts.

//         if (n==0){
//             cout<<"0";
//         }
//         else if (n==1 || n==2){
//             cout<<"1";
//         }
//         else
//         {
//             int arr[n+1];
//             arr[0]=0;
//             arr[1] = arr[2]=1;
//             for(int i=3; i<=n; i++){
//                 arr[i]= arr[i-1]+arr[i-2]+ arr[i-3];
//             }
//             cout<<arr[n];
//         }
