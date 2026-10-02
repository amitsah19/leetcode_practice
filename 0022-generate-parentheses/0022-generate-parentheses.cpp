class Solution {
public:
// the space can be further optimised by passing temp by refrence
 void solve( int n , int open , int close , vector<string> &ans , string temp)
 {
    if(close == n)
    {
        ans.push_back(temp);
        return ;
    }
    // two conditions to be checked 
    // 1. number of opening brackets should be greater then closing  to that for adding a closing bracket
    // 2 . both closing and opening should be less than n .
    if(open <n)
    solve( n, open +1, close, ans, temp +'(');
    // temp +'(' creates a new string 
    // no need to pass by refrence 
    // if u want to pass by refrence make sure to pop_back
    if(close<open)
    solve(n , open , close+1, ans , temp+')');

 }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        solve(n , 0 , 0 ,ans , temp );
        return ans;
        
    }
};