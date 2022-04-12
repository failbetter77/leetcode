#include <unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> box;
        for(int i=0; i<nums.size(); i++)
            box.insert(nums[i]);     
        
        int maxcnt=0;
        while(box.size()>0){
            int number=*box.begin();
            int count=1;
            box.erase(number);
            int bigger=number+1;
            int smaller=number-1;
            
            while(box.count(smaller)>0){
                box.erase(smaller--);                
                count++;
            }
            while(box.count(bigger)>0){
                box.erase(bigger++);
                count++;                
            }
            
            maxcnt = max(maxcnt,count);
        }
        return maxcnt;
        
    }
};