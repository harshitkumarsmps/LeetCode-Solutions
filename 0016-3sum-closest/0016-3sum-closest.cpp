class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mval=INT_MAX;
        int pmval=INT_MAX;
        int rsum=0;

        
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            
            int k=nums.size()-1;
            while(j<k){
               int sum=nums[i]+nums[j]+nums[k];
               mval=min(mval,abs(sum-target));

               if(mval<pmval){
                pmval=mval;
                rsum=sum;
               }
               if(sum<target){
                j++;
               }
               else if(sum>target){
                k--;
               }
               else return sum;
            }

        }
        return rsum;
        
    }
};