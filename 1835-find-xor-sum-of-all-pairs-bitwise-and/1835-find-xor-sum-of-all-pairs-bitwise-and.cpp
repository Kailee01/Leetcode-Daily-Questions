class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {        
        long long xorOfArr1=0,xorOfArr2=0;
        for(int i:arr1)xorOfArr1^=i;
        for(int i:arr2)xorOfArr2^=i;
        return xorOfArr1&xorOfArr2;
    }
};