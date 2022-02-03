#define ll long long
class Solution {
public:
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,vector<int>&nums4) {
    
    
    /*
    sol1:n4
     for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                for(int k=0;k<nums3.size();k++){
                    for(int l=0;l<nums4.size();l++){
                        if(nums1[i]+nums2[j]+nums3[k]+nums4[l]==0)cnt++;
                    }
                }
            }
        }
        return cnt;
   sol2:n3 
    long long cnt=0;
        unordered_map<long long,int>m;
        for(int i:nums4)m[i]++;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                for(int k=0;k<nums3.size();k++){
                        long long no=nums1[i]+nums2[j]+nums3[k];
                    if(m[-no]!=0)cnt+=m[-no];
                    }
                }
            }
        
        return cnt;
    
    sol3:n2
        long long cnt=0;
    unordered_map<ll,ll>frq;
    for(int u:nums1)
        for(auto v:nums2)frq[u+v]++;
    
    for(auto x:nums3)
        for(auto y:nums4)if(frq.find(-(x+y))!=frq.end())cnt+=frq[-(x+y)];
        
        return cnt;
    
    
    */
    long long cnt=0;
    map<ll,ll>frq;
    for(int u:nums1)
        for(auto v:nums2)frq[u+v]++;
    
    for(auto x:nums3)
        for(auto y:nums4)if(frq.find(-(x+y))!=frq.end())cnt+=frq[-(x+y)];
        
        return cnt;
    }
};