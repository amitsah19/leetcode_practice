class Solution {
public:
    // the sort function is not written by me 
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),[](vector<int>& a, vector<int>& b) {
         if (a[0] == b[0])
             return a[1] > b[1];
         return a[0] < b[0];
         });
         
        int count =0;
        int start=intervals[0][0], end =intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=start && intervals[i][1]<=end){
                count++; 
            }
            else{
                end=intervals[i][1];
                start=intervals[i][0];
            }
            
        }
       
        return intervals.size() - count;
    }
};