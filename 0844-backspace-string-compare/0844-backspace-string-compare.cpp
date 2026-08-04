class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        for(char i:s){
           if(a.empty()&&i=='#')continue;
           if(!a.empty()&&i=='#'){
            a.pop_back();
            continue;
           }
           a+=i;
        }
        for(char i:t){
           if(b.empty()&&i=='#')continue;
           if(!b.empty()&&i=='#'){
            b.pop_back();
            continue;
           }
           b+=i;
        }

        return a==b;
    }
};