class Solution {
public:
    int strCnt=0;
    string ans;
    void generateAllHappy(int n,int level,string curPerm,int k){
        if(level==n){
            strCnt++;
            if(strCnt==k){
                ans=curPerm;
            }
            cout<<curPerm<<endl;
            return ;
        }

        
        for(char ch='a';ch<='c';ch++){
            if(level==0){
                if(curPerm[level]=='#'){
                curPerm[level]=ch;
                generateAllHappy(n,level+1,curPerm,k);
                curPerm[level]='#';
            }
        }
        else {
            if(curPerm[level]=='#'&&curPerm[level-1]!=ch){
                curPerm[level]=ch;
                generateAllHappy(n,level+1,curPerm,k);
                curPerm[level]='#';
            }
            
        }
    }
    }
    
    
    string getHappyString(int n, int k) {
        string curPerm="";
        for(int i=0;i<n;i++)curPerm+='#';
        strCnt=0;
        generateAllHappy(n,0,curPerm,k);
     return ans;   
    }
};