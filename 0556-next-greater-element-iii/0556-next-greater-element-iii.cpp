class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>vec;
        long long int a=n;
        int curr = INT_MAX;
        while(a>0){
            vec.push_back(a%10);
            a/=10;


        }
        int ind=-1;
        reverse(vec.begin(),vec.end());
        for(int i=vec.size()-2;i>=0;i--){
            if(vec[i]<vec[i+1]){
                ind=i;

            break;
            }

        }
        int ind2=-1;
        if(ind == -1)
    return -1;
        for(int i=vec.size()-1;i>ind;i--){
            if(vec[i]>vec[ind]&&curr>vec[i]){
                curr=vec[i];
                ind2=i;
            }

            

        }
        if(ind == -1)
    return -1;
    if(ind2 == -1)
    return -1;
       
         swap(vec[ind2],vec[ind]);
         sort(vec.begin()+ind+1,vec.end());
         a=0;
         for(int i:vec){
            a=a*10+i;
         }
         if(a > INT_MAX)
    return -1;
         return a;
    }
};