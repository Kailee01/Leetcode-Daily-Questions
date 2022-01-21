class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        
        // two pointer o(nlogn),O(1);
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int i=0,j=0;
        vector<int>Ans;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j])Ans.push_back(nums1[i]),i++,j++;
            else if(nums1[i]<nums2[j])i++;
            else j++;
            
        }
        return Ans;
        
        ///////////////////////////////////////////////////////////////////////////
        unordered_map<int,int>m1;
        for(int num:nums1)m1[num]++;
        vector<int>ans;
        for(int num:nums2){
            if(m1[num]>0){
                m1[num]--;
                ans.push_back(num);
            }
        }
        return ans;
    }
};