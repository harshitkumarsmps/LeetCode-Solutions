class Solution {
public:
   int fn(int a){
    int sum=0;
    while(a>0){
    int x=a%10;
    a/=10;
    sum+=x*x;
    }
return sum;
   }
    bool isHappy(int n) {
        vector<int>vec;
        int a=n;
        while(fn(a)!=1){
            auto it=find(vec.begin(),vec.end(),a);
            if(it!=vec.end()){
                return false;
            }

            
             vec.push_back(a);
              a=fn(a);
             
             
            
        }
        
    return true;

 }
};