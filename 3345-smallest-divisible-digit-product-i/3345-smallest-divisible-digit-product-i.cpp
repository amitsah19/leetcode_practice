class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i=n;i<=n+10;i++){
            int prod =1;
            int num =i;
            while(num){
                prod= prod *( num% 10);
                num/=10;
            }
            if(prod % t == 0)return i;
        }
        return -1;
    }
};