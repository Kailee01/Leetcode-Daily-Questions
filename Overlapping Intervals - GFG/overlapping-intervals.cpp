// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
          sort(intervals.begin(),intervals.end());
vector<vector<int>>merged;
merged.push_back(intervals[0]);



for(int i=1;i<intervals.size();i++){
int cur_st=intervals[i][0];    
int cur_end=intervals[i][1];

vector<int>last=merged.back();

int last_st=last[0];
int last_end=last[1];


if(cur_st>=last_st&&cur_end<=last_end){
    continue;
}
else if(cur_st<=last_end){
    last_end=cur_end;
    merged.back()[1]=last_end;
}
else if(cur_st>last_st){
merged.push_back(intervals[i]);
}
}
         
return merged;         
         
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends