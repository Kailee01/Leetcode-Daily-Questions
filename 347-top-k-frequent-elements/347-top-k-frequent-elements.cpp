#define pii pair<int,int>
class cmp{
    public:
    bool operator()(pii n1,pii n2){
        return n1.first>n2.first;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     priority_queue<pii,vector<pii>,cmp>pq;
            unordered_map<int, int> cnt;
        for (auto num : nums) cnt[num]++;
        
        
        
         for (auto kv : cnt) {
            pq.push({kv.second, kv.first});
             cout<<pq.top().first<<" "<<pq.top().second<<endl;
             
            while (pq.size() > k) pq.pop();
        }
        nums.clear();
        while(pq.size()){
            cout<<pq.top().first<<" "<<pq.top().second<<endl;
            nums.push_back(pq.top().second);
            pq.pop();
        }
        
        
     return nums;       
    }
};