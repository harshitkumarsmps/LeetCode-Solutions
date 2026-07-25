class Solution {
public:
     int fn(vector<int>& nums,int i){
        for(int a=0;a<=i;a++){
            if(nums[i]<nums[a])return nums[a];
        }
        return -1;
     }
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        
        vector<int>v1(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty()&&nums[i]>=st.top()){
                st.pop();
                
       }
       
       v1[i]=st.empty()?fn(nums,i):st.top();
       st.push(nums[i]);

        }
        return v1;
      
    }
};