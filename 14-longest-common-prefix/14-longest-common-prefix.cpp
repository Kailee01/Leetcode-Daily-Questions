class Solution {
public:
    bool checkLCP(vector<string>& strs,int ln){
        string to_check=strs[0];
        for(int i=0;i<strs.size();i++){
            if(strs[i].substr(0,ln)!=to_check.substr(0,ln))return 0;
        }
        return 1;
     }
    
    string longestCommonPrefix(vector<string>& strs) {
        int ln=1e9;
        for(auto x:strs)ln=min(ln,(int)x.size());
        int st=0,end=ln;
        while(st<=end){
            int mid=(st+end)/2;
            if(checkLCP(strs,mid))st=mid+1;
            else end=mid-1;
        }
     return strs[0].substr(0,end);   
    }
};