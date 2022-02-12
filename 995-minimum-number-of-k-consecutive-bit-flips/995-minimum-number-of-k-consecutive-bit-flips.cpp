class Solution {
public:
    int minKBitFlips(vector<int>& A, int B) {
          int n=A.size(),ans=0;
        // o(n) better approach solution using queue
        // queue will track the B size window's fliped cahrachter 
    
        queue<int>q;
        for(int i=0;i<n;i++){
            if((A[i]==1&&q.size()%2)||(A[i]==0&&q.size()%2==0)){
// if q size is odd (1) and even (0)
                q.push(i+B-1);
                ans++;
            }
            if(q.size()&&q.front()==i)q.pop(); // Remove the idx whihc out of window
        }
        return  q.size()?-1:ans;
        
    // Bf Approach
    int i=0;
    while(i<A.size()){
                if(A[i] == 0){
                ans++;
                if(i+B>A.size()) return -1;
                for(int j=i;j<i+B;j++)  
                    A[j] = A[j]==1?0:1;
            }
            while(i<A.size()&&A[i]==1)i++;
        }
        return ans;
    }
};