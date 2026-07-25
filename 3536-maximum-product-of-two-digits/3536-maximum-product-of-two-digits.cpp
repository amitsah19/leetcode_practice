class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
        while(n){
            v.push_back(n%10);
            n=n/10;
        }
        sort(v.begin(),v.end());
        int k= v.size();
        int ans = v[k-1]*v[k-2];
        return ans;
    }
};