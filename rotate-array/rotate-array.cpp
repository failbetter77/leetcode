class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //auto p = nums.begin();
        //for(int i=0; i<k; i++){
        //    p=nums.insert(p,nums.back());
        //    nums.pop_back();
        //}
        // why time limit? 
        //
        //reverse(nums.begin(), nums.end());
        //for(int i=0; i<k; i++){
        //    nums.push_back(nums[i]);
        //}
        //nums.erase(nums.begin(),nums.begin()+k);
        //reverse(nums.begin(), nums.end());
        vector<int> temp(nums.size());
        for(int i=0; i<nums.size(); i++){
            temp[(k+i)%nums.size()]=nums[i];
        }
        nums=temp;       
        
    }
};