class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[digits[i]]++;
        for(int i=100;i<1000;i+=2){
            int curr = i;
            vector<int>freq(10,0);
            while(curr){
                freq[curr%10]++;
                curr/=10;
            }
            bool flag =true;
            for(int j = 0;j<10;j++){
                if(freq[j]!=0){
                    if(freq[j]>mp[j]){
                        flag= false;
                        break;
                    }
                }
            }
            if(flag)ans.push_back(i);
        }
        return ans;
    }
};