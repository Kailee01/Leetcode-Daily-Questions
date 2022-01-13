class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
        int curr_ans=a[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(cnt==0)curr_ans=a[i];
            
            cnt+=a[i]==curr_ans?1:-1;
            
        }
        
    return curr_ans;    
        // can be more optimised
    }
    
};
