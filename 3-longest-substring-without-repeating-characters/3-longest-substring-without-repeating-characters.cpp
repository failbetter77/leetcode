class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // head에서 이미 갖고있던 문자가 나오면, 
        // tail을 그 문자 바로 앞으로 옮긴다. 
        // 각 문자의 위치를 보관해야한다. 
        if(s.size()==0)
            return 0;
        int dic[256]={-1,};
        memset(dic, -1, sizeof(int) * 256);
  
        int t=0;
        int max=0;
        
        for(int i=0; i< s.size(); i++){
            //h++; // 한칸 전진
            
            if(dic[s[i]]<t){                 
                dic[s[i]]=i;    //box에 s[h] 원소의 위치를 넣음;
            }
            else{// 움직인 자리가 0이 아니면, 새로운 자리로 교체.
               t=dic[s[i]]+1; // 기존자리 한칸 앞에 두고, 
               dic[s[i]]=i;   // 기존 자리의 index를 현재값으로 갱신 
                
            }
            max = max > (i-t)+1 ? max : i-t+1;
        }
        return max;   
    }
};