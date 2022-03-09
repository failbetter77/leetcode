class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //two pointer로 푼다.
        //cur과 find 포인터가 있다. 
        // find포인터가 새로운 수를 찾으면 cur과 find를 swap한다. 
        // 범위 
        // 
        
        if(nums.size()==1)
            return 1;
        
        // 반환값은 cur이고, 
        // cur은 현재수와 다른 수가 나타났을때 카운트를 올린다. 
        int cur=0;
        for(int i=1; i<nums.size();i++){
            if(nums[cur]!=nums[i]){
                cur++;
                swap(nums[cur],nums[i]);
            }
        }
        return cur+1;
        
    }
};