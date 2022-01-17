class Solution {
public:
    void dfs(int src,vector<vector<int>> &G,vector<int> &visit){        
        if(visit[src]) return ;
        visit[src]=1;
        for(auto nbrs:G[src]){
            dfs(nbrs,G,visit);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visit(n,0);
        dfs(0,rooms,visit);
        for(int i=0;i<n;i++)if(visit[i]==0)return 0;
        return 1;
    }
};