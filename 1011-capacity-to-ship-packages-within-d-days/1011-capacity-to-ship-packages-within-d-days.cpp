class Solution {
public:
    int check(vector<int>& weights,int mid , int days){
        int count = 1;
        int m = mid ;
        for(int i=0;i<weights.size();i++){
            if(m>=weights[i]){
                m-=weights[i];
            }
            else {
                count++;
                m= mid ;
                m-=weights[i];
            }
        }
        return count <=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxi =INT_MIN;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            maxi= max(maxi , weights[i]);
        }
        int low = maxi ;
        int high = sum;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low )/2;
            if(check(weights, mid , days)==true){
                ans = mid ;
                high = mid -1;
            }else low = mid +1;
        }
        return ans;
    }
};