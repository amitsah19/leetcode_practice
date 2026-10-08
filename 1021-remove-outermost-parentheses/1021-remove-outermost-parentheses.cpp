class Solution {
public:
// not done by me 
    string removeOuterParentheses(string s) {
        string ans = "";
        int level =0;
        for(auto it : s ){
            if(it=='('){
                if(level>0)ans+=it;
                level++;
            }
            else {
                level--;
                if(level>0)ans+=it;
                
            }
        }
        return ans;
    }
};