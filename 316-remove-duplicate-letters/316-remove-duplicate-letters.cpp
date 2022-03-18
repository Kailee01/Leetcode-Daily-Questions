class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>last_index(26),visit(26,0);
        for(int i=0;i<s.size();i++)last_index[s[i]-'a']=i;
        
        /**
        logic:
        keetp two things in mind-
        1)to get lexico_smallest make sure cur_Char is greater then last charin the final_ans.
        2) if we have more last_char present in string in future by poping it we can insert it in future to get smallest string.
        
        abcabc
        abcabc
        
                */        
        
        string ans="";
        
        for(int i=0;i<s.size();i++){
            
            if(visit[s[i]-'a'])continue;
            while(ans.size()>0&&ans.back()>s[i]&&last_index[ans.back()-'a']>i){
                visit[ans.back()-'a']=0;
                ans.pop_back();
            }
            // cout<<ans<<endl;
            
                ans+=s[i],visit[s[i]-'a']=1;
        }
                      return ans;
    }
};