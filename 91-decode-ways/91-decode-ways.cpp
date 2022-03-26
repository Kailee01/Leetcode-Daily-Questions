class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n,0);
        
        // handling the base case:
        dp[n-1]=s[n-1]-48>0?1:0;
        if(n==1) return dp[0];
        int d=(s[n-1]-48)+(s[n-2]-48)*10;
        if(d<=26)dp[n-2]=dp[n-1]+1;
        else dp[n-2]=dp[n-1];
        if(s[n-2]=='0')dp[n-2]=0;
        
        cout<<d<<endl;
            
        for(int i=n-3;i>=0;i--){
            if(s[i]=='0')dp[i]=0;
            else {
                dp[i]=dp[i+1];
                int x=s[i]-48;
                int y=s[i+1]-48;
                int d=x*10+y;
                cout<<d<<endl;
                if(d<=26)dp[i]+=dp[i+2];
                
            }
            
        }
        for(auto x:dp)cout<<x<<" ";
        return dp[0];
    }
};