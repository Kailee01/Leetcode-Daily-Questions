class Solution {
public:
    
  
    
    
// Method 1:
int dp[11][11];
    string LongestPalindrome(string s) {        
        int n=s.size();
        if(n==1) return s;


        int ln=1;
        memset(dp,-1,sizeof(dp));
        // 1 ki length
        for(int i=0;i<n;i++)dp[i][i]=1;
        // 2 ki length
        for(int i=0;i<n-1;i++)if(s[i]==s[i+1])dp[i][i+1]=2;
        
        // length >2
        for(int l=3;l<=n;l++){
            for(int st=0;st<=n-l;st++){
                int end=st+l-1;
             // abdba if start and end are equal then check the string (start+1,end-1)  is palind
                if(s[st]==s[end]&&dp[st+1][end-1]!=-1)dp[st][end]=2+dp[st+1][end-1];
            }
        }

int ss=0,ee=0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
// cout<<dp[i][j]<<" ";
if(dp[i][j]!=-1){
if(ln<j-i+1){
    ss=i,ee=j;
    ln=j-i+1;
    }
}    
}
// cout<<endl;
}

return s.substr(ss,ee-ss+1);
    }  
   
   
   
   // Method 2:
   
   string longeststrconstSpace(string s){
       
       int l=0,h=0,st=0,end=0;
 int bst_ln=1;
for(int i=1;i<s.size();i++){
    l=i-1,h=i;
    while(l>=0&&h<s.size()&&s[l]==s[h]){
     if(h-l+1>bst_ln){
         st=l,end=h,bst_ln=h-l+1;
     }
l--,h++;
    }


    l=i-1,h=i+1;
    while(l>=0&&h<s.size()&&s[l]==s[h]){
     if(h-l+1>bst_ln){
         st=l,end=h,bst_ln=h-l+1;
     }
l--,h++;
    }
}

return s.substr(st,bst_ln);
   }   
   



    
    
    
    
    

    string longestPalindrome(string s) {    
            return longeststrconstSpace(s);  //tc=o(n^2) sc=(1)
    // return LongestPalindrome(A);             tc=o(n^2) sc=(n^2)
               
    }  

    
};