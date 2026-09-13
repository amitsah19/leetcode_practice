class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>st;
        for(auto it : words){
            st.insert(it);
        }
        int count =0;
        for(auto it : words){
            string temp = it;
            reverse(temp.begin(),temp.end());
            if(temp==it)continue;
            if(st.find(temp)!=st.end()){
                 st.erase(it);
                 count++;
            }
        }
        return count ;
    }
};