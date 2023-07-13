class Solution {
public:
      
    
    bool canFinish(int V, vector<vector<int>>& pre) {
        //first we will make a adjacency list 
        //since we will do a bfs kanhs algo 
        //valid for dag only
        //agar traversal karke vector int ka size number of nodes ke equal aye matlab cycle nhi hai aur hum sare course schedule kr pa rhe hai..
        vector<int>adj[V];
        
        for(auto x: pre){
            adj[x[1]].push_back(x[0]);
        }
        
        
        //bfs begin of kanhs algo
        vector<int>indegree(V);
        for(int i=0; i<V; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        
        //indegrees are noted here now
        queue<int>q;
        for(int i=0; i<V; i++){
            if(indegree[i] ==0){
                q.push(i);
            }
        }
        
        
        vector<int>topo;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            topo.push_back(curr);
            
            for(auto x: adj[curr]){
                indegree[x]--;
                if(indegree[x] ==0){
                    q.push(x);
                }
            }
        }
        
        //agar topo ka size equal to V huwa matlab sare courses cover ke liye humne;
        return topo.size() == V;
        
        
        
        
    }
};