class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = nums[0];
        int end = nums[n-1];
        int i =0;
        vector<int>ans;
        while( start < end ){
            if(nums[i]==start){
                i++;
                start++;
            }
            else {
                ans.push_back(start);
                start ++ ;
            }
        }
        return ans ;
    }
};