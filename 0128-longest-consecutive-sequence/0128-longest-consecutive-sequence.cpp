class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int>st(nums.begin(), nums.end());
         int len =0;
         for(auto it : st){
            int cnt =0;
            if(!st.count(it-1)){
                cnt++;
                while(st.count(it + cnt)){
                    cnt ++ ;
                }
                len= max( len , cnt );
            }
         }
         return len ;

    }
};

