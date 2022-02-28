class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start){    // dict[s[i]] > start 를 체크하는 이유는,
                                        // 이미 한번 봤던 숫자이므로, 시작점을 갱신하기 위해서다. 
                //cout << i << " : " <<start << " : " << dict[s[i]] << endl;
                start = dict[s[i]];
                //cout << i << ": "<< s[i] << " : " <<start << endl;
                
            }
            dict[s[i]] = i;     // dict[s[i]]에는 s내 알파벳의 위치가 들어간다. 
            maxLen = max(maxLen, i - start);    // 길이를 세기위해, i에서 start를 뺀다. 
        }
        return maxLen;
    }
};