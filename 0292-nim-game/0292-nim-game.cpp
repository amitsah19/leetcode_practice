class Solution {
public:
    bool canWinNim(int n) {
        int something = n % 4 ;
        if(something == 1 ||something == 2||something == 3)return true;
        return false;
    }
};