class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        bool flag =false;
        auto ans = 0;
        for(int i=0;i<n;i++){
            ans = nums[i]^ans;
            if(nums[i]!=0)flag = true;
        }
        if(flag==true && ans !=0)return n;// pura sequence ka non zero xor hai so no issue 
        if(flag == true && ans ==0)return n-1;// last me same two numbers ka xor hua so 1 ko chorke baki sb ko le lo 
        return 0;// all zero 
    }
};