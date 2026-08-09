class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int st = 0;
        int end = 0;
        int sum = 0;
        int wid = INT_MAX;

        while(end < nums.size()) {

            sum += nums[end];
            end++;

            while(sum >= target) {

                wid = min(wid, end - st);

                sum -= nums[st];
                st++;
            }
        }

        if(wid == INT_MAX)
            return 0;

        return wid;
    }
};