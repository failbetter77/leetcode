class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cur=0;      //insert hear
        int find=0;     //find number
        
        while(find<nums.size())
        {
           if(nums[find]!=0){
               swap(nums[cur++],nums[find++]);
           }
            else{
                find++;
            }
        }        
    }
};