class Solution {
public:
    int fact(int n){
        if(n<2) return 1;
        return n*fact(n-1);
    }
    
    
    
    int ncr(int n,int r){
        return fact(n)/(fact(r)*fact(n-r));
    }
    
        
vector<int> getRow(int rowIndex) {
        vector<int> A(rowIndex+1, 0);
        A[0] = 1;
        for(int i=1; i<rowIndex+1; i++)
            for(int j=i; j>=1; j--)
                A[j] += A[j-1];
        return A;
    }
};