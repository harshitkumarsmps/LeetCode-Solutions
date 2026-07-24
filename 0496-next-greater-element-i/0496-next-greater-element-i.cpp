class Solution {
public:
   

     int fn(vector<int>nums2, int i){
         bool s=true; 
         int ans=-1;
        for(int a:nums2){
            if(s==false&&a>i){
                ans=a;
                break;
                
            }
            if(a==i)s=false;
            
        }
        return ans;
     }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;


        for(int i:nums1){
            vec.push_back(fn(nums2,i));

        }
        return vec;
        
    }
};