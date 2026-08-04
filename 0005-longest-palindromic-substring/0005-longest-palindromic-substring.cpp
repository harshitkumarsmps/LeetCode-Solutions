class Solution {
public:
 int maxlen=1;
        int start=0;
        void fn(int left,int right,string s){
            while(left>=0&&right<s.size() && s[left]==s[right]){
                if(maxlen<right-left+1){
                    maxlen=right-left+1;
                    start=left;

                }
                left--;
                right++;
                
            }
        }
    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            fn(i,i,s);
            fn(i,i+1,s);

        }
       return s.substr(start,maxlen);

        
    }
};