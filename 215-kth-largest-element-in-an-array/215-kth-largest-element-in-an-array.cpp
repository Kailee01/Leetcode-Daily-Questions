class Solution {
public:
    
    
    int kthLargest(vector<int> &v,int k){
    int i=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(;i<k;i++)pq.push(v[i]);
    
    for(;i<v.size();i++){
        if(v[i]>pq.top())pq.pop(),pq.push(v[i]);
    }
    
        return pq.top();
    
}

    int findKthLargest(vector<int>& nums, int k) {
        return kthLargest(nums,k);
        /*
        
        Approach1. Sorting arr[k] - {nlogn+k,1}
        Approach2. use map to Store frq of each element {nlogn+k,n}
        Approach3. use heap insert all elemt first and then delete k elm {lonn!+k,n}
        Approach4. use heap and every time keep size = k insert/delgte according to k largest {nlogk,n}
        Approach5. Quick Select --->Padna hai
        */
        
        
        
        
        
        
        
        
        
        
        
        
        
map<int,int>frq;
        for(int i=0;i<nums.size();i++)frq[nums[i]]++;
        int cnt=nums.size()-k+1;
        int c=0;
        for(auto x:frq){
            // cout<<x.first<<endl;
            int no=x.second;
            while(no>0){
            c++;
            no--;
                 if(c==cnt)return x.first;
                }
                
            }
        
        
        
        return 0;
    }
};