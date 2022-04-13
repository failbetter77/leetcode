class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 아이디어
        // 저 애들을 다 hashmap에 넣고, 
        // 있으면 추가하면 된다. 
        // 자료형으로 set을 사용할것,
        // set 과 map의 차이는, 
        // set은 해당 수의 존재 유무를 확인하고, 
        // map은 key 와 value를 저장한다. 
        unordered_set<int> box;
        int maxcnt=0;
        for(auto a:nums)
            box.insert(a);
        
        while(box.size()!=0){
            int number = *box.begin();
            box.erase(number);
            int cnt=1;
            // find left
            int left=number;
            while(box.find(--left)!=box.end()){                
                cnt++;               
                box.erase(left);
            }
            
            // find right
           int right=number;
            while(box.find(++right)!=box.end()){
                cnt++;
                box.erase(right);
            }
            maxcnt  = max(cnt,maxcnt);           
            
        }
        return maxcnt;
        
        
    }
};