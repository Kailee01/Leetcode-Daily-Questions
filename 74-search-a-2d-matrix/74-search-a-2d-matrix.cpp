class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int B) {
        int st=0,end=A.size()-1;
        int m=A[0].size();
        int final_row=-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(A[mid][0]<=B&&B<=A[mid][m-1]){
                final_row=mid;
                break;
            }
            else if(B<A[mid][0])end=mid-1;
            else st=mid+1;
            cout<<mid<<endl;
            
        }

        st=0,end=m-1;
        // cout<<final_row<<endl;
        if(final_row==-1) return 0;
        while(st<=end){
            
            int mid=(st+end)/2;
            
            if(A[final_row][mid]==B) return 1;
            else if(A[final_row][mid]<B) st=mid+1;
            else end=mid-1;
        }
        return 0;

        
    }
};