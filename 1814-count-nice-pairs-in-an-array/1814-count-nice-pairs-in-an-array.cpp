class Solution {
public:
    int reverse(int n) {
        int ans = 0;
        while (n) {
            ans *= 10;
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        long long mod = 1e9 + 7;
        long long  ans = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int temp = reverse(nums[i]);
            if(mp.count(nums[i]-temp))ans=(ans+(mp[nums[i]-temp]))%mod;
            mp[nums[i] - temp]++;
        }
   
        return ans;
    }
};