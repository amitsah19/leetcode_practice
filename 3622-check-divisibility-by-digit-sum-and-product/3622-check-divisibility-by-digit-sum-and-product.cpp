class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, product =1;
        int num = n;
        while(n){
            int digit = n%10;
            sum+=digit;
            product = product * digit;
            n/=10;
        }
        int final = sum + product ;
        if(num% final == 0)return true;
        else return false;
    }
};