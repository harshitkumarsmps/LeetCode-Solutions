class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0.0;
        if(k>nums.size())return 0.0;
        for(int i=0;i<k;i++){
            sum+=nums[i];

        }
     double avg=(double)sum/k;
        for(int i=0;(i+k)<nums.size();i++){
            sum-=nums[i];
            sum+=nums[i+k];

            avg=max(avg,(double)sum/k);

        }
        return avg;
        
    }
};