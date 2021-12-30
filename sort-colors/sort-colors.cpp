class Solution {
public:
    void sortColors(vector<int>& A) {
 int i=0,s=0,n=A.size(),e=n-1;
 while(i<=e){
     if(A[i]==0){swap(A[i],A[s]);s++;i++;}
     else if(A[i]==2){swap(A[i],A[e]);e--;}
     else i++;
 }
 return ;
}
};