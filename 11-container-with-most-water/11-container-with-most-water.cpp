class Solution {
public:
    int maxArea(vector<int>& A) {

        
        
        //bf
//         int start=0;
//         int ans=INT_MIN;
//         int end=height.size()-1;
//         for(int i=0;i<=end;i++)
//         {
//             for(int j=i+1;j<=end;j++){
//                 int area=min(height[i],height[j])*(j-i);
//                 ans=max(ans,area);
                
//             }
            
//         }        
        
    int l=0,r=A.size()-1,max_area=0;
    while(l<r){
        max_area=max(max_area,(r-l)*(min(A[l],A[r])));
        if(A[l]<A[r])l++;
        else if(A[l]>A[r])r--;
        else l++,r--;
    }
    return max_area;
}

        
        
        
    
};