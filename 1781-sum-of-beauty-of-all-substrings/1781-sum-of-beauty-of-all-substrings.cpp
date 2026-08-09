class Solution {
public:
    int beautySum(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            int arr[26]{0};
            for(int j=i;j<s.size();j++){

                arr[s[j]-'a']++;
                int maxf=0;
                int minf=INT_MAX;
                  for(int k=0;k<=25;k++){
                    if(arr[k]>0){
                    minf=min(minf,arr[k]);
                    maxf=max(maxf,arr[k]);
                    }

                  }
                  count+=maxf-minf;



            }
        }
        return count;
        
    }
};