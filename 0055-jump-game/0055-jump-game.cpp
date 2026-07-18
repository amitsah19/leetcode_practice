class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex=0;
        for(int i=0;i<n;i++){
            if(maxIndex<i)return false;// we have to first check whether the index at which i is is even reachable or not that is why we are chechking it first 
            maxIndex=max(maxIndex, nums[i]+i);
            if(maxIndex>=n)return true;
        }
        return true;
    }
};