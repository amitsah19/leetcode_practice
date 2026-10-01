class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)return false;
        stack<int>st;
        for(auto ch: s)
        {
            if (ch == '(' || ch == '[' || ch == '{') 
                st.push(ch);
            else 
            {
                if(st.empty())return false ;
                else 
                {
                 if(ch==')' && st.top()!='(' ||ch=='}' && st.top()!='{' || ch==']' && st.top()!='[')
                 return false ;
                 else st.pop();
                }
            }
  
        }
        return st.empty();
        
    
    }
};