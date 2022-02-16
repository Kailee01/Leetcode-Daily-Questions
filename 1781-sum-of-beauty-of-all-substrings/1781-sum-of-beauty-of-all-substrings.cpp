class Solution {
public:
    int beautySum(string s) {

        int sum=0;
        
        for(int ln=1;ln<=s.size();ln++){
            vector<int>frq(26,0);
            int min_frq=0,max_frq=0;
            
            for(int i=0;i<ln;i++)
                frq[s[i]-'a']++;
                
                int k=0;
                while(k<26&&frq[k]==0)k++;
                min_frq=frq[k],max_frq=frq[k];
                
                for(int i=k;i<26;i++){
                if(frq[i]){
                min_frq=min(min_frq,frq[i]);
                max_frq=max(max_frq,frq[i]);
                }
             }
                
            // cout<<max_frq<<" "<<min_frq<<" "<<ln<<endl;
            sum+=(max_frq-min_frq);
            for(int i=ln;i<s.size();i++){
                
                min_frq=0,max_frq=0;
                frq[s[i]-'a']++;
                frq[s[i-ln]-'a']--;
                
                k=0;
                while(k<26&&frq[k]==0)k++;
                min_frq=frq[k],max_frq=frq[k];
                
                
                
                
            for(int j=k;j<26;j++){
                if(frq[j]){
                min_frq=min(min_frq,frq[j]);
                max_frq=max(max_frq,frq[j]);
                }
            }
            sum+=(max_frq-min_frq);
        }
        }
        return sum;
    }
};