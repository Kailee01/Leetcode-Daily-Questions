class CombinationIterator {
public:
    vector<string>allComb;
    int ln,idx;
    
    void allCombGenerate(int i,string str,string cur){
        if(i==str.size()){
            if(cur.size()==ln){
                allComb.push_back(cur);
            }
            return ;
        }
        cur+=str[i];
        allCombGenerate(i+1,str,cur);
        cur.pop_back();
        allCombGenerate(i+1,str,cur);
    }
    
    
    CombinationIterator(string str, int l) {
        ln=l;
        idx=0;
        allCombGenerate(0,str,"");
    }
    
    string next() {
        return allComb[idx++];
        
    }
    
    bool hasNext() {
        return idx<allComb.size();
    }
};
/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */