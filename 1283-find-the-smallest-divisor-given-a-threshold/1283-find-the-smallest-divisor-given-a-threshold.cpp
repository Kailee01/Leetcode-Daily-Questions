class Solution {
public:
    int cielFun(int a,int b){
        return a%b==0?(a/b):(a/b)+1;
    }
    
     long long getSumOfDivisons(vector<int> &num,int divisor){
         long long sum=0;
         for(auto x:num){
             sum+=cielFun(x,divisor);
         }
         return sum;
     }
    
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int end=-1,st=1;
        for(auto x:nums)end=max(end,x);

        while(st<=end){
            int mid=st+(end-st)/2;
            long long potentialAns=getSumOfDivisons(nums,mid);
            if(potentialAns<=threshold){
                end=mid-1;
            }
            else {
                st=mid+1;
            }
        }
        return end+1;     

    }
};