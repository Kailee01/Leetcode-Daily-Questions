class Solution {
public:
    bool trustOnAnyOne(int val,vector<vector<int>> &v){
        
        for(int i=0;i<v.size();i++){
            if(v[i][0]==val) return 0;
        }
        return 1;
        
    }
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.size()==0){
            return n==1?1:-1;
        }
        
        unordered_map<int,int>trustedBy;
        for(int i=0;i<trust.size();i++){
            trustedBy[trust[i][1]]++;
            }
        
        for(auto x:trustedBy){
            if(x.second==n-1&&trustOnAnyOne(x.first,trust)){                
                return x.first;
            }
        }
        return -1;
    }
};