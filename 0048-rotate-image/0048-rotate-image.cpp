class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      
        int n=matrix[0].size();
         vector<vector<int>> vec(n, vector<int>(n));
        
        int a=0,b=-1;
        for(int i=n-1;i>=0;i--){
            a=0;
            b++;
            
            for(int j=0;j<n;j++){
                vec[a++][b]=matrix[i][j];
                
                }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=vec[i][j];
            }
        }
        
    }
};