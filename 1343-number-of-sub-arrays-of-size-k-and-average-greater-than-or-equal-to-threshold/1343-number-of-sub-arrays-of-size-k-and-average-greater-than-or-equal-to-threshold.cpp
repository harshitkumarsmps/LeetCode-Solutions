class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        if(k>arr.size())return 0;
        double avg=0.0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];    
        }
        avg=(double)sum/k;
        int ct=0;
        if(avg>=threshold)ct++;
        for(int i=0;i+k<arr.size();i++){
            sum-=arr[i];
            sum+=arr[i+k]; 
             avg=double(sum)/k;
             if(avg>=threshold)ct++;
        }
     return ct;
        
    }
};