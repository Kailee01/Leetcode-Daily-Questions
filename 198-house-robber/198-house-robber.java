class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        int[] a=new int[n+1];
        a[0]=0;
        a[1]=nums[0];
        for (int i=2 ; i<=n ;i++){
            a[i] = Math.max(nums[i-1] +a[i-2] ,a[i-1]);
        }
        return a[n];
    }
}