class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto it: arr){
            int ele = it;
            ele = (ele%k + k)%k;
            mp[ele]++;
        }
        if(mp[0]%2!=0)return false;
        mp.erase(0);
        for(auto it : mp){
            int ele = it.first;
            int rem = k-ele;
            if(mp.find(rem)==mp.end())return false;
            if(mp[rem]!=mp[ele])return false;
        }
        return true;
    }
};