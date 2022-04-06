class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int cnt=0;
        int mini=100000;
        while(l<nums.size()){
            if(target<=sum){
                //cout << "check" << endl;
                mini=min(cnt,mini);
                cnt--;
                sum-=nums[l];
                l++;                
            }
            else if(r<nums.size()){
                sum+=nums[r];
                r++;                
                cnt++;
            }
            else{
                sum-=nums[l];
                l++;                
                cnt--;
            }
            //cout << sum <<":" <<cnt << endl;
        }
        if(mini==100000)
            return 0;
        return mini;        
    }
};