class Solution {
public:
    int check (int mid , vector<int>& piles, int h){
        long long  hrs = 0;
        int m = mid ;
        for(int i=0;i<piles.size();i++){
            int num = piles[i];
            hrs+=(num+mid-1)/mid;
            if(hrs>h)return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MIN;
        for(int i=0;i<piles.size();i++){
            high = max(high , piles[i]);
        }  
        int ans =-1;
        while(low<=high){
            int mid = low + (high - low )/2;
            if(check(mid , piles , h)){
                ans = mid ;
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }  
        return ans ;    
    }
};