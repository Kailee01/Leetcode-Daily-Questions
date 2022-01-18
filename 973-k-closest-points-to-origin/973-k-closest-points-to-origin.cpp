class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& A, int B) {
        
        
        
        
        
        
        /// Heap max heap se
priority_queue<pair<int,int> >pq;
    int i=0;
    for(;i<B;i++){
        int d=A[i][0]*A[i][0]+A[i][1]*A[i][1];
        pq.push({d,i});
    }
        
    // BlogB+(N-B)logB
    for(;i<A.size();i++){
            int d=A[i][0]*A[i][0]+A[i][1]*A[i][1];
        if(d<pq.top().first){
            pq.pop();
            pq.push({d,i});
        }
    }
    vector<vector<int>>sln1;
    while(pq.size()){
        vector<int>v{A[pq.top().second][0],A[pq.top().second][1]};
        sln1.push_back(v);
        pq.pop();
    }
return sln1;    
        
        
        
        
        
        
        
        
        // Sorting
            vector<pair<int,int>>vec;
    for(int i=0;i<A.size();i++){
        int x=A[i][0],y=A[i][1];
        int d=x*x+y*y;
        vec.push_back({d,i});
    }
    sort(vec.begin(),vec.end()); //nlogn+BlogB
    vector<vector<int>>sln;
    for(int i=0;i<B;i++)sln.push_back(A[vec[i].second]);
    sort(sln.begin(),sln.end());
    return sln;
    }
};