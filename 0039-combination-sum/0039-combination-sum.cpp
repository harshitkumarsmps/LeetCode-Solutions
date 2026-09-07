class Solution {
public:
    void fn(vector<vector<int>>&ans,vector<int>vec,int target,vector<int>&candidates,int ind){
            if(ind==candidates.size()){
                if(target==0){
                    ans.push_back(vec);
                  
                }
                return;
            }
            if(candidates[ind]<=target){
                vec.push_back(candidates[ind]);
                fn(ans,vec,target-candidates[ind],candidates,ind);
                vec.pop_back();

                

            }
                        fn(ans,vec,target,candidates,ind+1);

        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int ind=0;
        vector<int>vec;
         fn(ans,vec,target,candidates,ind);
        return  ans;
        
    
    }
};