class Solution {
public:
    int lowerBound(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans =-1;
        while(low<=high){
            int mid = low + ((high - low )/2);
            if(nums[mid]==target){
                ans = mid;
                high = mid -1 ;
            }
            else if(nums[mid ]> target )high = mid -1;
            else low = mid +1;
        }
        return ans;
    }
    int upperBound(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans =-1;
        while(low<=high){
            int mid = low + ((high - low )/2);
            if(nums[mid]==target){
                ans = mid;
                low = mid +1 ;
            }
            else if(nums[mid ]> target )high = mid -1;
            else low = mid +1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>ans(2);
       ans[0]=lowerBound(nums,target);
       ans[1]=upperBound(nums,target);
       return ans;

    }
};