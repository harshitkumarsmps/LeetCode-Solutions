class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0;
        int right=nums.size()-1;
        int ind=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])<abs(nums[right])){
                ans[ind]=nums[right]*nums[right];
                right--;
            }
            else
            {
                ans[ind]=nums[left]*nums[left];
                left++;
            }
            ind--;
        }
        return ans;
    }
};