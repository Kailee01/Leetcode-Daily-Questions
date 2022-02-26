class Solution {
public:
    bool isEven(int n){
        int sum=0;
        while(n){
            sum+=(n%10);
            n/=10;
        }
        return sum%2==0;
    }
    
    int countEven(int num) {
        int ans=0;
        for(int i=1;i<=num;i++){
            if(isEven(i))ans++;
        }
        return ans;
    }
};