class Solution {
public:
    int majorityElement(vector<int>& a) {
        //Mor's Algo
        int curr_majority_elm=a[0];
        int cnt=1;
        for(int i=1;i<a.size();i++){
            if(cnt==0)curr_majority_elm=a[i];
            cnt+=a[i]==curr_majority_elm?1:-1;
        }
    return curr_majority_elm;    
    }
    
};