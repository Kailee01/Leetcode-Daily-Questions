#define ll long long
class Solution {
public:

    
    
    
    
    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
        vector<ll>pow(k,1);
        for(int i=1;i<k;i++){
            pow[i]=(pow[i-1]%modulo*power%modulo)%modulo;
        }
        
        ll n=s.size();
        ll curHash=0;
        string ans="";
        for(int i=n-k;i<n;i++){
            ll valHash=((s[i]-'a'+1)%modulo*(pow[i-n+k])%modulo)%modulo;
            curHash=(curHash%modulo+valHash%modulo)%modulo;
        }
        if(curHash==hashValue){
            ans=s.substr(n-k,k);
        }
        // cout<<curHash<<endl;
        ll powAdd=pow[k-1];
        for(int i=n-k;i>=1;i--){
            ll valRemove=((s[i+k-1]-'a'+1)%modulo*powAdd%modulo)%modulo;
            ll valAdd=(s[i-1]-'a'+1)%modulo;
            curHash%=modulo;
            // cout<<s.substr(i-1,k)<<"---> ";
            // cout<<curHash<<" "<<valRemove<<" "<<valAdd<<endl;
            
            curHash=(curHash%modulo-valRemove%modulo+modulo)%modulo;
            curHash=(curHash%modulo*power%modulo)%modulo;// K will never zero
            curHash=(curHash%modulo+valAdd%modulo)%modulo;
            
        if(curHash==hashValue){
            ans=s.substr(i-1,k);
        }
        }
        return ans;
        
    }
};