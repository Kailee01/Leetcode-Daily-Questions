class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
    int sum = 0;
    for (int i = 0, odd = 0; i < arr.size(); ++i) {
        if (arr[i] % 2)
            odd = (i - odd) + 1;
        sum = (sum + odd)  % 1000000007;
    }
    return sum;
}
};