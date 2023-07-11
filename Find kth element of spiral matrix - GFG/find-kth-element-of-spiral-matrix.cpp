//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 	    
 	    int count=0;
 	    int res = n*m;
 	    int left =0 , up =0, right = m-1, down = n-1;
 	    
 	    
 	    while(count<= res){
 	        
 	        for(int i = left; i<=right && count <=res; i++){
 	            count++;
 	          //  cout<<count<<" ";
 	            if(count == k) return a[up][i];
 	        }
 	      //  cout<<"\n";
 	        
 	        
 	        for(int i = up+1; i<= down -1 && count <=res; i++){
 	            count++;
 	          //  cout<<count<<" ";
 	            if(count == k) return a[i][right];
 	        }
 	      //  cout<<"\n";
 	        
 	        
 	        for(int i=right; i>=left && count <=res; i--){
 	            count++;
 	          //  cout<<count<<" ";
 	            if(count == k) return a[down][i];
 	        }
 	      //  cout<<"\n";
 	        
 	        
 	        for(int i= down -1; i>= up+1 && count <= res; i--){
 	            count++;
 	          //  cout<<count<<" ";
 	            if(count == k) return a[i][left];
 	        }
 	      //  cout<<"\n";
 	        
 	        left++, right --, up ++ , down --;
 	    }
 	    return 0;
 	    
 	    
 	    
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends