class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {       
        // what is need? 
        // sol1. pick peak and valley 
        
        int valley = 1;
        int peak = 1;
        
        for(int i=1; i < nums.size(); i++){
            if(nums[i]>nums[i-1]){ // valley
               peak = valley+1;
            }else if ( nums[i]<nums[i-1] ){ 
                valley = peak +1;
            }
        }
        
        return max(peak, valley);
        
    }
};