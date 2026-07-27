class Solution {
public:
 void fn(vector<int>&vec, vector<vector<int>>&ans,vector<int>& nums,int ind){
            if(ind==nums.size()){
                ans.push_back(vec);
                return;
            }
            vec.push_back(nums[ind]);
            fn(vec,ans,nums,ind+1);
            vec.pop_back();
            fn(vec,ans,nums,ind+1);
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>vec;
        vector<vector<int>>ans;
       
        fn(vec,ans,nums,0);
        return ans;

            
    }
};