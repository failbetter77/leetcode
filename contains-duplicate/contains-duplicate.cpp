class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> map;
        for(auto a:nums){
            if(map.find(a)==map.end())
                map[a]=true;            
            else
                return true;              
        }
        return false;
    }
};