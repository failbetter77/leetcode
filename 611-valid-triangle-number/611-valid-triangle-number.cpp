class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        //삼각형의 조건 : 가장 긴변의 길이는 나머지 두변의 합보다 작다. 
        sort(nums.begin(),nums.end());
        int l,r;
        int cnt=0;
        for(int i=nums.size()-1; i>=2; i--){
           r=i-1; l=0; 
            while(l<r){
                //cout << nums[l] <<":" <<nums[r] <<":" << nums[i] <<endl;
                if(nums[l]+nums[r] > nums[i]){
                    cnt+=(r-l);
                    r--;
                }
                else{
                    l++;
                }
                             
            }         
        }
        return cnt;
    }    
};