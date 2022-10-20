#define pii pair<int,int>
class Solution {
public:
vector<pii>Graph[101];
vector<int>dist;
    int Dijkstra(int src,int dest){
        dist[src]=0;
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        pq.push({0,src});
        while(pq.size()){
            auto nearest=pq.top();pq.pop();
            int node=nearest.second;
                
            for(auto nbrs:Graph[node]){
                int cur_nbr=nbrs.first,weight=nbrs.second;
                if(dist[cur_nbr]>dist[node]+weight){
                    dist[cur_nbr]=weight+dist[node];
                    pq.push({weight,cur_nbr});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=dest;i++)ans =max(ans,dist[i]);
        return ans==1e9?-1:ans;
    }
    
    
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        dist.resize(101,1e9);
        for(int i=0;i<times.size();i++){
            Graph[times[i][0]].push_back({times[i][1],times[i][2]});         
        }
        return Dijkstra(k,n);
    }
};