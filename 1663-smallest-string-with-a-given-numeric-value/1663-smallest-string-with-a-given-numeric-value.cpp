class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string ans="";
        for(int i=0;i<n;i++)ans+='a';
        
        int val=n;
        for(int i=n-1;i>=0;i--){
            for(char ch='b';ch<='z';ch++){
                if(val==k){
                    return ans;
                }
                ans[i]=ch;
                val++;
            }
        }
        return ans;
    }
};