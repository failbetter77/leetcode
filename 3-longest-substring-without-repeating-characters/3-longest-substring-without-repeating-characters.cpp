class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int r=0;
        int l=0;
        int max=0;
        vector<int> dict(256, -1);          // acsii코드에 대한 문자열 저장소를 만듬 index는 결국 문자이며,
                                            // 해당값은 숫자값을 가진다. 
        for(int i=0; i<s.size(); i++){            
            if(dict[s[i]]<l){              // 처음 보는 알파벳일 경우
                dict[s[i]]=i;               // 해당 알파벳의 index를 저장한다. 
                cout << s[i] << endl;
            }
            else{
                l=dict[s[i]]+1;
                dict[s[i]]=i;
            }                       
            //cout << i << ":" << l << ":" << i-l+1 << endl;
            max = max< i-l+1 ? i-l+1 : max;
            
        }
        return max;
    }
};