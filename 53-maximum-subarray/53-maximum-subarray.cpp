class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int ans=A[0],cur_sum=A[0];
        ans=max(ans,cur_sum);
    for(int i=1;i<A.size();i++){
        cur_sum+=A[i];
        cur_sum=max(cur_sum,A[i]);
        ans=max(ans,cur_sum);
        
    }
    return ans;
    }
};