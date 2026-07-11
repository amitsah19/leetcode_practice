class Solution {
public:
    int candy(vector<int>& ratings) {
        int totalCandy=0;
        int n =ratings.size();
        vector<int>candy(n,1);
        // comparing with left neighbour
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1])candy[i]=max(candy[i-1]+1,candy[i]);
        }
        //comparing with right neighbour
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])candy[i]=max(candy[i+1]+1,candy[i]);
            totalCandy+=candy[i];
        }
        totalCandy+=candy[n-1];
        return totalCandy;

    }
};