class Solution {
public:
    int search(vector<int>& nums, int target) {
        //sorted array 이므로, binary search를 생각해본다. 
        // 중앙에 mid / head / end 를 둔다. 
        // mid 보다 target이 크면, head를 옮기고
        // mid 보다 target이 작으면, end를 옮긴다. 
        
        int head = 0;
        int end = nums.size()-1;       
        int mid;;
        
        if(nums.size())
        
        while(head<=end){            // 이 조건 맞나? 
            mid= (head+end)/2;
            cout << mid << ":" << nums[mid]<<endl;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                end=mid-1;            
            }
            else{
                head=mid+1;                 
            }                
        }
        return -1;
        
    }
};