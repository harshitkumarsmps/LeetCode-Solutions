class Solution {
public:
    vector<int>pse(vector<int>&heights,vector<int>&v1,stack<int>&st){
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i]<=heights[st.top()])
            st.pop();

         v1[i]=st.empty()?-1:st.top();
         st.push(i);
        }
        return v1;
        

    }


       vector<int>nse(vector<int>&heights,vector<int>&v2,stack<int>&st){
        for(int i=heights.size()-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()])
            st.pop();

         v2[i]=st.empty()?heights.size():st.top();
          st.push(i);
        }
        return v2;
        

    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>v1(heights.size());
        vector<int>v2(heights.size());
        stack<int>st;
        pse(heights,v1,st);
        while (!st.empty())
    st.pop();
         nse(heights,v2,st);
         int area=0;
         int w=0; 

       for(int i=0;i<heights.size();i++){
        w=v2[i]-v1[i]-1;
        area=max(area,heights[i]*w);
       
       }
       return area;
        
    }
};