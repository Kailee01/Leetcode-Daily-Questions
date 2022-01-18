bool cmpare(pair<int,char> &p1,pair<int,char> &p2){
       return p1.first>p2.first;  
   }

class Solution {
public:
string frequencySort(string s) {
        string sortedStr="";
        vector<pair<int,char>>frq(256);
        for(auto x:s)
            frq[x-48]={++frq[x-48].first,x};
        sort(frq.begin(),frq.end(),cmpare);
    
        for(int i=0;i<frq.size();i++){
                while(frq[i].first--)
                    sortedStr+=(frq[i].second);
        }
    
        return sortedStr;
    }
};