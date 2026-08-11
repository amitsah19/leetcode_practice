class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum =nums[0];
        int index =0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==(nums[i-1]+1))sum+=nums[i];
            else {
                index = i;
                break;
            }
        }
        if(index = 0)return sum+1;
        unordered_set<int>st;
        for(int i = index ;i<nums.size();i++){
            st.insert(nums[i]);
        }
        while(index<nums.size()){
            if(st.find(sum)!=st.end()){
                sum++;
            }
            else{
                return sum;
            }
            index++;
        }
        return sum;
    }
};