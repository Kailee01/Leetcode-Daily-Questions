class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
    int prev_val=0,i=0;
        if(s.size()<k) return 0;
        
        for(i=k-1;i>=0;i--){
            if(s[i]=='1'){
                prev_val+=(1<<(k-1-i));
            }
        }
        
        // cout<<prev_val<<endl;
        unordered_set<int>st;
        st.insert(prev_val);
        for(i=1;i<=s.size()-k;i++){
            int nums_to_remove=s[i-1]=='1'?(1<<(k-1)):0;
            int nums_to_add=s[i+k-1]=='1';
            int cur_val=prev_val-nums_to_remove;
            cur_val*=2;
            cur_val+=nums_to_add;
            // cout<<cur_val<<" "<<nums_to_add<<" "<<nums_to_remove<<endl;
            st.insert(cur_val);
            prev_val=cur_val;
        
        }
        return st.size()==(1<<k);
    }
};