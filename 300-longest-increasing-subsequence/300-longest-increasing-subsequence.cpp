class Solution {
public:
 
  
       int lowerBound(vector<int> &v,int key){
   int st=0,end=v.size()-1,mid=0,ans=0;

   while(st<=end){
    mid=(st+end)/2;
    cout<<st<<" "<<end<<endl;
    if(v[mid]>=key)ans=mid,end=mid-1;
    else st=end+1;
    
   }
   if(v[st]<key)ans++;
return ans;
   }
   
    int lengthOfLIS(vector<int>& v) {
int n=v.size();
 vector<int>lis;
  lis.push_back(v[0]);
  for(int i=1;i<v.size();i++){
    if(v[i]>lis.back())lis.push_back(v[i]);
    else {
  int u=lower_bound(lis.begin(),lis.end(),v[i])-lis.begin();
lis[u]=v[i];
    }
  }
  return lis.size();
}        
};