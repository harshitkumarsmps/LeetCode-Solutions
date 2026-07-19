class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       string ans="";
        for(char i:s){
            mp[i]++;

        }
        priority_queue<pair<int,char>>q;
        for(auto i:mp){
            q.push({i.second,i.first});

        }
        while(!q.empty()){
            int freq=q.top().first;
            char ch=q.top().second;
             q.pop();
            while(freq>0){
            ans+=ch;
            freq--;
           
            }
        }
        return ans;
    }
};