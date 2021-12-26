class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
        int x=startPos[0],y=startPos[1];
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            int cur=0;          
            int xx=x,yy=y;
            
            for(int j=i;j<s.size();j++){                
                if(s[j]=='L')yy--,cur++;
                else if(s[j]=='R')yy++,cur++;
                else if(s[j]=='U')xx--,cur++;
                else if(s[j]=='D')xx++,cur++;
                        
                if(xx<0||xx>=n||yy<0||yy>=n){
                    cur--;
                    break;
                }
                
            }
            
            ans.push_back(cur);
        }
        return ans;
    }
};