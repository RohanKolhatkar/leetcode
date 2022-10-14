// class Solution {
// public:
//     int maxProfit(vector<int>& arr) {
//         int n = arr.size();
// //         int min= INT_MAX;
// //         int index=-1;
// //         for(int i=0; i<n; i++){
// //             if(arr[i]<min){
// //               min = arr[i];
// //               index=i;
// //             }   
// //         }
        
// //         int max = INT_MAX;
// //         int index1 = arr[index];
// //         for(int i = index; i<n; i++){
// //             if(arr[i] > max) {
// //                 max = arr[i];
// //                 index1 = i;
// //             }
// //         }
        
        
// //         return index1 -index;
        
        
        
//     }
// };

// dp way;

class Solution {
public:
	int maxProfit(vector<int>& prices) 
	{
		//idea is to maintain minimum seen so far so that we can buy at that point
		//and try to sell at each i and maximize the profit
		//draw the curvature  
		int minimum_so_far = prices[0];
		int maxprofit = 0;
		for(int i=0;i<prices.size();i++)
		{
			if(prices[i]<minimum_so_far)
				minimum_so_far =prices[i];

			maxprofit = max(maxprofit,prices[i]-minimum_so_far);
		}
		return maxprofit;
	}
};







// way -01 --> find the minimumin the array then from the minimum to its left find the maximum and return the profit as max-min.