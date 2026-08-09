class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')str+=s[i];
            if(!str.empty()&&s[i]==' '){
                st.push(str);
                str="";
            }
        }
        if(!str.empty()){
            st.push(str);
        }
        str="";

        
        while(!st.empty()){
            str+=st.top();
            st.pop();
            if(!st.empty()){
                str+=" ";
            }


        }
        return str;
    }
};