class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size()-1;
        int j=t.size()-1;
        while(i>=0||j>=0){
            int sks=0;
            
            while(i>=0){
                if(s[i]=='#'){
                    sks++;
                    i--;
                }
                else if(sks>0){
                    i--;
                    sks--;
                }
                else{
                    break;
                }
            }
             int skt=0;
            while(j>=0){
               
                if(t[j]=='#'){
                    skt++;
                    j--;


                }
                else if(skt>0){
                    j--;
                    skt--;
                }
                else {
                    break;
                }

            }
            if(i>=0&&j>=0){
            if(s[i]!=t[j])return false;
            }

            else if(i>=0||j>=0)return false;
            i--;
            j--;
        }
        return true;
    }
};