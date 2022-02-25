class Solution {
public:
    string reverseWords(string s) {
        int l=0;
        int r=0;
        std::cout << s.length() << endl;
        //auto p=s.begin();
        while(r<=s.length()){
            
            //if((int(s[r])<=122 && int(s[r])>=97) || (int(s[r])>=65 && int(s[r])<=90)){
            if(s[r]==' ' || r==s.length()){                
                reverse(s.begin()+l,s.begin()+r);   // reverse(s.begin(), s.end())
                                                    // s.end() == s.begin()+s.length()+1 이다. 
                //reverse(&s[l], &s[r]);
                r++;
                l=r;
            }else{
                r++;
            }
            
        }
     return s;   
    }
};