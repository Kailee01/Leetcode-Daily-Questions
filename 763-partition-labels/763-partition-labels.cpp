class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)m[s[i]]=i;
        int last=m[s[0]];
        int st=0,end=last;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
        // cout<<last<<" "<<m[s[i]]<<endl;
            // cout<<st<<" "<<end<<endl;
            if(i==last)ans.push_back(end-st+1),st=i+1,last=i<s.size()-1?m[s[i+1]]:-1,end=last;
            else if(m[s[i]]<=last)continue;
            else last=m[s[i]],end=last;
        }
        return ans;
        
    }
};