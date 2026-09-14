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
            mp[nums[i] - temp]++;
        }
        for (auto it : mp) {
            if (it.second > 1) {
                int num = it.second;
                ans += (num%mod)*((num-1)%mod)/2;
                ans = ans % mod;
            }
        }
        return ans;
    }
};