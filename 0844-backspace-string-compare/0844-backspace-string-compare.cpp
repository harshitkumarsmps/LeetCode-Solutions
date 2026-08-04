class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        vector<char>vec;
        for(char i:s){
            if(vec.empty()&&i=='#')continue;
            if(!vec.empty()&&i=='#'){
                vec.pop_back();
                continue;
            }
            vec.push_back(i);
        }
        for(int i:vec){
            a+=i;
        }
        vec.clear();
         for(char i:t){
            if(vec.empty()&&i=='#')continue;
            if(!vec.empty()&&i=='#'){
                vec.pop_back();
                continue;
            }
            vec.push_back(i);
        }
        for(int i:vec){
            b+=i;
        }
        

        return a==b;
    }
};