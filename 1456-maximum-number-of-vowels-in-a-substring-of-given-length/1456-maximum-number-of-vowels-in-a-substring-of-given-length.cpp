class Solution {
public:
 bool isvowel(char c){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                return true;
            }
            return false;
        }
    int maxVowels(string s, int k) {
        
        if(k>s.size())return 0;
       
        int a=0;

        for(int i=0;i<k;i++){
            if(isvowel(s[i]))a++;
        }
        int c=a;
        for(int i=0;i+k<s.size();i++){
            if(isvowel(s[i])){
                a--;
            }
            if(isvowel(s[i+k])){
                a++;
            }
            c=max(c,a);
        }
        return c;
    }
};