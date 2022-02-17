class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,list<string>>l;
        int n=strs.size();
    for(int i=0;i<n;i++){
        string s,s1;s=strs[i];
        s1=s;sort(s1.begin(),s1.end());
        l[s1].push_back(s);}

vector<vector<string>>vec;
    for(auto x:l){
  auto li=x.second;
        vector<string>v;
  for(auto xx:li){cout<<xx<<" ";v.push_back(xx);}
        vec.push_back(v);
    }
        
        return vec;
        
    }
};