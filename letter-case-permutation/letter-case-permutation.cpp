class Solution {
public:
    
    vector<string>v;
    bool isDigit(char ch){
        return ch-'0'>=0&&ch-'0'<10;
    }
    bool isChar(char ch){
        return isupper(ch)||islower(ch);
    }
    
    void getAll(string str,string cur,int i){
        if(i>=str.size()){
            cout<<cur<<endl;
            v.push_back(cur);
            return ;
        }
        
        if(isDigit(str[i])){
            while(i<str.size()&&isDigit(str[i])){
            cur+=str[i++];
            }
            if(i==str.size()){
                cout<<cur<<endl;
                v.push_back(cur);
                return ;
            }
        }
        
        if(isChar(str[i])){
    if(islower(str[i])){
        cur+=(char)(str[i]-32);
            }
        if(isupper(str[i])){
        cur+=(char)(str[i]+32);
            }
        getAll(str,cur,i+1);
        cur.pop_back();
            cur+=str[i];
        getAll(str,cur,i+1);
            cur.pop_back();
    }
        
    }
    
    
    vector<string> letterCasePermutation(string s) {
        getAll(s,"",0);
        return v;
    }
};