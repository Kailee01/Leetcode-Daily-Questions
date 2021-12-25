class Solution {
public:
int fact[8] = { 1, 1, 2, 6, 24, 120, 720, 5040 };    
    
    
    // Sol1. Passed for uniqueChar in tiles
    int ncr(int n,int r){
        return (fact[n]/fact[n-r]);
    }
    int answer=0;
    unordered_map<string,int>isPresent;
    
    
    // Sol2. Failed
    void getAllStr(int i,string curStr,string tiles,int ln){
        if(i==ln){
            sort(curStr.begin(),curStr.end());
            if(isPresent[curStr]==0){
                int n=curStr.size();
                
                unordered_map<char,int>cnt;
                for(auto x:curStr)cnt[x]++;
                int rep=1;
                for(char ch='A';ch<='Z';ch++){
                    if(cnt[ch]>1){
                        rep*=fact[cnt[ch]];
                    }
                }
                
               int ans1=(fact[n]/rep);
                answer+=ans1;
                
                cout<<curStr<<"-->"<<ans1<<endl;
                isPresent[curStr]++;
            }
            return ;
        }
        for(int j=0;j<tiles.size();j++){
            curStr+=tiles[j];
            getAllStr(i+1,curStr,tiles,ln);
            curStr.pop_back();
            
        }
        
    }
    
    
    
    
    void addPerm(vector<int> &curSubset){
         unordered_map<int,int>cnt;
                cnt.clear();
                for(auto x:curSubset)cnt[x]++;
                int rep=1;
                for(int ch=0;ch<26;ch++){
                    if(cnt[ch]>1){
                        rep*=fact[cnt[ch]];
                    }
                }
                int n=curSubset.size();
               int ans1=(fact[n]/rep);
                answer+=ans1;
            // for(auto x:curSubset)cout<<(char)('A'+x)<<" ";
            // cout<<ans1<<endl;
    }
    
    
    // sol3. using all the subset permuataion.
      void subsetDup(int i,vector<int> &nums,vector<int> &curSubset,bool isPrev){
        if(i==nums.size()){
            addPerm(curSubset);
            return ;
        }
        subsetDup(i+1,nums,curSubset,false);
        if(i>0&&nums[i]==nums[i-1]&&(!isPrev)){
            // cout<<"same"<<i<<endl;
            return ;
            // if you skip the x then all the x shold be skipped.
        }
        curSubset.push_back(nums[i]);
        subsetDup(i+1,nums,curSubset,true);
        curSubset.pop_back();
    }
    
    
    int numTilePossibilities(string tiles) {
        int n=tiles.size();
        vector<int>nums(n);
        for(int i=0;i<n;i++)nums[i]=tiles[i]-'A';
        sort(nums.begin(),nums.end());
        vector<int>curSubset;
    subsetDup(0,nums,curSubset,false);
      return answer-1; // subtracting the empty one.
//         for(int i=1;i<=n;i++){  iF THE STRING IS OF UNIQUE CHAR.
//             ans+=(ncr(n,i));
//         }
        
       
    }
};