class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int , int>mp;
        int st=0;
        int end=0;
        int wid=INT_MIN;
        while(end<fruits.size()){
            mp[fruits[end]]++;
            end++;
            while(mp.size()>2){
               
                mp[fruits[st]]--;
              if(mp[fruits[st]] == 0)mp.erase(fruits[st]);
                st++;

            }
             wid=max(wid,end-st);
        }
        if(wid==INT_MIN)return 0;
        return wid;

        
    }
};