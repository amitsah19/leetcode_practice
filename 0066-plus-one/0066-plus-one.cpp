class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int end = digits.size();
        if(digits[end-1]==9){
            digits[end-1]=0;
            carry=1;
            end=end-1;
            }
            else{
                digits[end-1]++;
                end--;
            }
        while(carry!=0 && end>0){
            if(digits[end-1]==9){
            digits[end-1]=0;
            end=end-1;
            }
            else{
                digits[end-1]++;
                carry--;
                end--;
            }
            
        }  
        if(carry!=0)digits.insert(digits.begin(),1); 
        return digits;
    }
};