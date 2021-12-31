class Solution {
public:
    void rotate(vector<vector<int>>& A) {
         int n=A.size();
 for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
    swap(A[i][j],A[j][i]);
}
 }    
 for(int i=0;i<n;i++){
     int s=0,end=n-1;
     while(s<end)swap(A[i][s++],A[i][end--]);
 }
 
return ;
    }
};